#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdlib.h>
#include <iostream>

template <class T>
class Array
{
    private:
        T *_arr;
        unsigned int    _size;
        class ErrorException: public std::exception
        {
            public:
                virtual const char *what() const throw() 
                { 
                    return ("Index Out of Bounds");
                }
        };
    public:
        Array(void) : _arr(new T[0]()), _size(0) {std::cout << "default" << std::endl;};
        Array(unsigned int i);
        Array(const Array &copy);
        Array& operator=(const Array &copy);
        T &operator[](unsigned int i);
        const T& operator[](unsigned int i) const;
        ~Array(void);
        unsigned int    size(void) const {return (_size);};
};

template <class T>
Array<T>::Array(unsigned int i) : _arr(new T[i]()), _size(i)
{
}


template <class T>
Array<T>::Array(const Array<T> &copy) : _arr(new T[copy._size]), _size(copy._size)
{
    for (size_t i = 0; i < _size; ++i)
        _arr[i] = copy._arr[i];
    std::cout << "paramatized" << std::endl;
}


template <class T>
Array<T> &Array<T>::operator=(const Array &copy)
{
    if (this != &copy)
    {
        delete [] _arr;
        _arr = new T[copy._size];
        _arr = copy._arr;
        _size = copy._size;
    }
    return (*this);
};

template <class T>
Array<T>::~Array(void) 
{ 
    delete [] _arr;
};

template <class T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw ErrorException();
    return _arr[i]; 
};

template <class T>
const T& Array<T>::operator[](unsigned int i) const
{
    if (i >= _size)
        throw ErrorException();
    return _arr[i]; 
};

#endif