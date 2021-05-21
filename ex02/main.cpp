#include <iostream>
#include <string>

#include "MutantStack.hpp"

#include <stack>

#include <list>

int main(void)
{
	MutantStack<int> itm;

	std::cout << itm.top() << "|" << itm.top() << std::endl;
	itm.push(15);
	itm.push(10);
	itm.push(10);
	itm.push(10);
	itm.push(10);

	MutantStack<int>::iterator it;

	it = itm.begin();

	std::cout << itm.top() << "|" << itm.size() << std::endl;

	while (it != itm.end())
	{
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}


/*
int main(void)
{
	std::list<int> itm;

	std::cout << itm.front() << "|" << *(itm.begin()) << std::endl;
	itm.push_back(15);
	itm.push_back(10);
	itm.push_back(10);
	itm.push_back(10);
	itm.push_back(10);

	std::list<int>::iterator it;

	it = itm.begin();

	std::cout << itm.front() << "|" << itm.size() << std::endl;


	while (it != itm.end())
	{
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}
*/
