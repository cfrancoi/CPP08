#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span
{

	public:

		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		typedef int*	iterator;

		Span &		operator=( Span const & rhs );

		int			shortestSpan(void) const;
		int			longestSpan(void) const;

		void		addNumber(int val);

		void		printTab();

		unsigned int	size() const;

		Span::iterator		begin();
		Span::iterator		end();

		Span::iterator		min();
		Span::iterator		max();

		void		addRangeNumber(Span::iterator start, Span::iterator end, int (*fct)());


		class SizeTooLow : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Size too low");
				}
		};



	private:
		unsigned int			_size;
		Span::iterator			_it;
		int	*					_tab;
		Span();
};

#endif /* ************************************************************ SPAN_H */