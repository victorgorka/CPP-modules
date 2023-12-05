#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstring>

template<typename T, typename L>
void	iter(T *array, L len, void (*ft)(T&))
{
	L i = 0;
	while (i < len)
		ft(array[i++]);
}

template<typename T, typename L>
void	iter(T *array, L len, void (*ft)(T const &))
{
	L i = 0;
	while (i < len)
		ft(array[i++]);
}
#endif