#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		Array(int n);
		Array(const Array &src);
		Array &operator=(const Array &src);
		~Array();

	public:
		T &operator[](int idx);
	
	public:
		unsigned int size() const;

	private:
		T *_array;
		unsigned int _size;

	private:
		class BadIndex : public std::exception
		{
			virtual const char	*what() const throw();
		};
};

template <typename T>
std::ostream &operator << (std::ostream &out, Array<T> &in);

#include "Array.tpp"

#endif