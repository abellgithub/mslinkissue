#include <iostream>

#include "json.hpp"
#include "jsonuser.hpp"
#include "arbiter.hpp"

int main()
{
	int i = json(1);
	i = arbiter(i);
	std::cerr << "I = " << i << "!\n";
	return 0;
}
