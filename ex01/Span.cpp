#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) : _size(n)
{
	_tab = new int[n];
	_it = &_tab[0];
}

Span::Span()
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	//
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


int Span::shortestSpan(void) const
{

	if (_size == 0 || _size == 1)
		throw(Span::SizeTooLow());
	int		min;

	min = INT_MAX; // a voir
	size_t i = 0;
	size_t j = 0;

	//
		iterator ita;
		iterator itb;

	while (i < _size)
	{
		j = 0;
		while (j < _size)
		{
			if (j != i && (_tab[i] - _tab[j]) >= 0 && (_tab[i] - _tab[j]) < min)
			{
				min = _tab[i] - _tab[j];
				ita = _tab + i;
				itb = _tab + j;
			}
			j++;
		}
		i++;
	}
	std::cout << "lowest: " << *ita << "|" << *itb << std::endl; 
	
	return (min);
}

int Span::longestSpan(void) const
{
	int min;
	int max;

	if (_size == 0 || _size == 1)
		throw(Span::SizeTooLow());
	
	min = _tab[0]; // a voir
	max = _tab[1]; // a voir

	size_t i;
	i = 0;
	while (i < _size)
	{
		if (_tab[i] < min)
			min = _tab[i];
		if (_tab[i] > max)
			max = _tab[i];
		i++;
	}
	return (max - min);
}

void Span::addNumber(int val) 
{
	if (_it == this->end())
	{
		throw(Span::SizeTooLow());
	}
	else
	{
		*_it++ = val;
	}
}

void Span::printTab() 
{
	size_t i;

	i = 0;
	while (i < _size)
	{
		std::cout << "tab[" << i << "]: " << _tab[i] << std::endl;
		i++;
	}
}


void Span::addRangeNumber(Span::iterator start, Span::iterator end, int (*fct)()) 
{
	while (start != end)
	{
		*start++ = fct();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


unsigned int Span::size() const
{
	return _size;
}

Span::iterator		Span::begin(void) 
{
	return _tab;
}

Span::iterator		Span::end(void)
{
	return (_tab + _size);
}

Span::iterator Span::min() 
{
	iterator it;
	iterator min;

	it = begin();
	min = it;
	while (it != end())
	{
		if (*it < *min)
			min = it;
		it++;
	}
	return min;
}

Span::iterator Span::max() 
{
	iterator it;
	iterator max;

	it = begin();
	max = it;
	while (it != end())
	{
		if (*it > *max)
			max = it;
		it++;
	}
	return max;
}

/* ************************************************************************** */