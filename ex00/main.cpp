#include <iostream>
#include <string>

#include <array>

#include "easyfind.hpp"

int main()
{
	srand(time(NULL));
	std::array<int, 10> lst;

	unsigned int i = 0;
	while (i < lst.size())
	{
		lst[i] = rand() % 50;
		std::cout << lst[i] << std::endl;
		i++;
	}
	int * p;

	p = easyfind(lst, 5);

	if (p)
		std::cout << "value was find : "<< *p << std::endl;
	else
		std::cout << "value was not find" << std::endl;

	int val = (rand() % 50);
	p = easyfind(lst, val);
	
	if (p)
		std::cout << "value was find : "<< *p << std::endl;
	else
		std::cout << "value was not find" << std::endl;


	return 0;
}
