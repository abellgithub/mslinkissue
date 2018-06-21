
#include "json.hpp"

__declspec(dllexport) int jsonuser(int i)
{
	return json(i) + 1;
}
