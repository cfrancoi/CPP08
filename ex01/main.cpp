#include "Span.hpp"
#include <iostream>
#include <string>

#include <array>

int		rand_int(void)
{
	
	


	return rand();
}

int 	get_next_nb()
{
	static int i = 0;

	i += 5;

	return i;
}
int 	range_int()
{
	return rand();
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

	sp.addRangeNumber(sp.begin(), sp.end(), get_next_nb);


	sp.printTab();



	std::cout << "shortest Span :" << sp.shortestSpan() << std::endl;
	std::cout << "longest Span  :" << sp.longestSpan() << std::endl;

	sp.addRangeNumber(sp.begin(), sp.end(), rand_int);

	std::cout << "shortest Span :" << sp.shortestSpan() << std::endl;
	std::cout << "longest Span  :" << sp.longestSpan() << std::endl;



	/*			*/
	return 0;
}
