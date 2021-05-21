#include "Span.hpp"
#include <iostream>
#include <string>

#include <array>

int		rand_int(void)
{
	
	


	return rand();
}

int 	range_int()
{
	static int i = 0;

	srand(rand());
	i += rand() % 10;

	return i;
}

int main()
{

	srand(time(NULL));

	/*			*/


	Span sp = Span(10000);




	//sp.printTab();

	std::cout << "size : "<< sp.size() << std::endl;

	//Span::iterator it = sp.begin();

	/*while (it != sp.end())
	{
		*it++ = rand_int();
	}*/

	sp.addRangeNumber(sp.begin(), sp.end(), rand_int);


	sp.printTab();



	std::cout << "shortest Span :" << sp.shortestSpan() << std::endl;
	std::cout << "longest Span  :" << sp.longestSpan() << std::endl;



	/*			*/
	return 0;
}
