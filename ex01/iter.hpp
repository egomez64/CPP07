#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>

void iter(T *addr, int lenght, F f)
{
	for (int i = 0; i < lenght; i++)
		f(addr[i]);
}

#endif