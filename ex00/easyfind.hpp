
template< typename T>
int		*easyfind(T el, int to_find)
{
	unsigned int i;

	i = 0;

	while (i < el.size())
	{
		if (to_find == el[i])
		{
			return &el[i];
		}
		i++;
	}
	return 0;
}