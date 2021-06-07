
template< typename T>
typename T::iterator	easyfind(T & el, int to_find)
{
	typename T::iterator	it;

	for(it = el.begin(); it != el.end(); it++)
		if (*it == to_find)
			break;
	return it;
}