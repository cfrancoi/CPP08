

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type type;
		typedef typename type::iterator iterator;

		iterator	begin() { return std::stack<int>::c.begin(); }
		iterator	end() { return std::stack<int>::c.end(); }
};