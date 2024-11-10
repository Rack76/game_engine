#include "ObjectPool.h"
#include <cstdlib>

namespace Engine
{
	ObjectPool::ObjectPool(int bytes, int count, int alignement)
	{
		data = _aligned_malloc(bytes * count, alignement);
	}
}