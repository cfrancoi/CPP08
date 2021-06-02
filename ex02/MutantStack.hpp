

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type type;
		typedef typename type::iterator iterator;

		iterator	begin() { return std::stack<T>::c.begin(); }
		iterator	end() { return std::stack<T>::c.end(); }
};
