#ifndef OBJECT_POOL_H
#define OBJECT_POOL_H

namespace Engine
{
	class ObjectPool
	{
	public:
		ObjectPool(int bytes, int count, int alignement);

		void* data;
	};
}

#endif