#include "Array.hpp"

template<class T>
Array<T>::Array()
{
	this->_array = new T [0];
	this->_size = 0;
}

template<class T>
Array<T>::Array(int n)
{
	this->_array = new T [n];
	this->_size = n;
	for (int i = 0; i < n; i++)
		this->_array[i] = 0;
}

template<class T>
Array<T>::Array(const Array<T> &src)
{
	this->_array = new T [src._size];
	this->_size = src._size;
	for (unsigned int i = 0; i < src._size; i++)
		this->_array[i] = src._array[i];

}

template<class T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this == &src)
		return *this;
	if (this->src != src._size)
	{
		delete [] this->_array;
		this->_array = new T [src._size];
		this->_size = src._size;
	}
	for (int i = 0; i < src._size; i++)
		this->_array[i] = src._array[i];
	return *this;
}

template<class T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template<class T>
unsigned int Array<T>::size() const
{
	return this->_size;
}

template<class T>
T &Array<T>::operator[](int idx)
{
	if (idx < 0 || static_cast <unsigned int> (idx) >= this->size())
		throw (Array::BadIndex());
	else
		return this->_array[idx];
}

template<class T>
const char *Array<T>::BadIndex::what() const throw()
{
	return "Index ask is out of the bound";
}

template<class T>
std::ostream &operator<<(std::ostream &out, Array<T> &in)
{
	out << "Array size : " << in.size() << ", Array content :" << std::endl;
	for (unsigned int i = 0; i < in.size(); i++)
	{
		out << in[i];
		if (i < in.size() - 1)
			out << ", ";
	}
	return out;
}