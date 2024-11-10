#ifndef POOL_MANAGER_H
#define POOL_MANAGER_H

#include <unordered_map>
#include "ObjectPool.h"
#include "rtti.h"

using Type = int;
using PoolHandle = int;

namespace Engine
{
	class PoolManager
	{
	public:
		template <typename T>
		static PoolHandle alloc_pool(int count)
		{
			pools[RTTI::id<T>()][poolCount++] = ObjectPool(sizeof(T), count, 64);
		}

	private:
		std::unordered_map<Type, std::unordered_map<PoolHandle, ObjectPool>> pools;
		int poolCount = 0;
	};
}

#endif