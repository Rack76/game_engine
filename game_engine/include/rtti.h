#ifndef RTTI
#define RTTI

namespace Engine
{
	class RTTI
	{
	public:
		template <typename T>
		static int id()
		{
			static int id = typeCount++;
			return id;
		}

	private:
		int typeCount = 0;
	};
}

#endif 