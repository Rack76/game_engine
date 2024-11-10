#ifndef POOL_MANAGER_H
#define POOL_MANAGER_H

#include "rtti.h"
#include "util.h"

using type = int;
using pool_handle = int;

namespace engine
{
	class pool_manager
	{
	public:
		template <typename T>
		static pool_handle alloc_pool(int count)
		{
			assertNoAbort(rtti::id<T>() < max_type_count, "pool_manager :: alloc_pool :: maximum type count exceeded");
			assertNoAbort(rtti::id<T>() < max_pool_count_per_type, "pool_manager :: alloc_pool :: maximum pool count per type exceeded");

			pools[rtti::id<T>()][pool_count_per_type++] = _aligned_malloc(sizeof(T) * count, 64);
		}

	private:
		static constexpr int max_type_count = 5;
		static constexpr int max_pool_count_per_type = 3;
		static void* pools[max_type_count][max_pool_count_per_type];
		static int pool_count_per_type;
	};
}

#endif