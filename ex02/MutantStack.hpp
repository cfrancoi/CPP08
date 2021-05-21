
template<typename Type>
struct  Node
{
	Type		el;
	Node<Type> *		next;
	Node<Type> &		operator++() { return *(this->next); }
	

};

template<typename Type>
std::ostream &			operator<<( std::ostream & o, Node<Type> const & i )
{
	o << i.el;
	return o;
}

template<typename Type>
class MutantStack
{
public:
	MutantStack();
	~MutantStack();

	typedef Node<Type>* iterator;
	typedef Node<Type>	node_t;

	void			push(Type to_push);


	size_t			size();

	node_t			&top();
	
	iterator		begin();
	iterator		end();
	private:
		iterator	_tab;
		iterator	it;
};

template<typename Type>
MutantStack<Type>::MutantStack() 
{
	_tab = 0;
	it = 0;
}

template<typename Type>
MutantStack<Type>::~MutantStack() 
{
	iterator start;
	iterator tmp;

	start = begin();

	while (start != NULL)
	{
		tmp = start->next;
		delete start;
		start = tmp;
	}
}

template<typename Type>
void MutantStack<Type>::push(Type to_push) 
{
	iterator it;

	it = _tab;
	if (_tab == NULL)
	{
		_tab = new node_t();
		_tab->el = to_push;
		_tab->next = 0;
		return;
	}
	while((it->next) != 0)
	{
		++it;
	}
	it->next = new node_t();
	++it;
	it->el = to_push;
	it->next = NULL;
}

template<typename Type>
size_t MutantStack<Type>::size() 
{
	iterator	it;
	size_t		ret;

	ret = 0;
	it = _tab;

	if (_tab == 0)
		return (0);
	if (_tab)
		ret++;
	while (it->next != NULL)
	{
		++it;
		++ret;
	}
	return ret;
	
}

template<typename Type>
typename MutantStack<Type>::node_t&		MutantStack<Type>::top() 
{
	return(*_tab);
}

template<typename Type>
typename MutantStack<Type>::iterator MutantStack<Type>::begin() 
{
	return (_tab);
}

template<typename Type>
typename MutantStack<Type>::iterator MutantStack<Type>::end() 
{
	iterator it;

	it = _tab;

	while(it->next)
		++it;
	return it;
}