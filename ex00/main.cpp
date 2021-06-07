#include <iostream>
#include <string>

#include <list>
#include <algorithm>

#include "easyfind.hpp"

void	print(int n)
{
	std::cout << " " << n;
}

std::list<int>::iterator eend(std::list<int> *lst)
{
	return lst->end();
}

int main()
{
	srand(time(NULL));
	std::list<int> lst;

	unsigned int i = 0;
	while (i < 25)
	{
		lst.push_back(rand() % 50);
		i++;
	}
	//lst.push_back(5);

	for_each(lst.begin(), lst.end(), print);
	std::cout << std::endl;
	std::list<int>::iterator it;
	std::list<int>::iterator itf;

	int fnd = rand() % 50;
	it = easyfind(lst, fnd);

	itf = find(lst.begin(), lst.end(), fnd);


	if (itf != lst.end())
		std::cout << "value was find : "<< *it << std::endl;
	if (it != lst.end())
		std::cout << "value was find : "<< *it << std::endl;
	else
		std::cout << "value was not find" << std::endl;

	int val = (rand() % 50);
	it = easyfind(lst, val);
	
	if (it != lst.end())
		std::cout << "value was find : "<< *it << std::endl;
	else
		std::cout << "value was not find" << std::endl;


	return 0;
}
