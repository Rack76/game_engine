#ifndef RTTI
#define RTTI

namespace engine
{
	class rtti
	{
	public:
		template <typename T>
		static int id()
		{
			static int id = typeCount++;
			return id;
		}

	private:
		int type_count = 0;
	};
}

#endif 