#ifndef __EASYFIND_H__
#define __EASYFIND_H__
#include <algorithm>

template< typename T>
typename T::iterator	easyfind(T & el, int to_find)
{
	return (find(el.begin(), el.end(), to_find));
}
#endif // __EASYFIND_H__