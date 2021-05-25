#include <iostream>
#include <string>

#include "MutantStack.hpp"

#include <stack>
#include <deque>
#include <list>

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
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
