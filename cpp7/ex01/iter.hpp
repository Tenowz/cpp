#ifndef ITER_HPP
# define ITER_HPP

#include <stdio.h>
#include <iostream>

template <class T, class J>
void    iter(T* arr, size_t len, void(*funct)( J &))
{
    for (size_t i = 0; i < len; i++)
        funct(arr[i]);
};

template <class T>
void    iter(T* arr, size_t len, void(*funct)( T &))
{
    for (size_t i = 0; i < len; i++)
        funct(arr[i]);
};

template <class T>
void print_t(const T x)
{
    std::cout << x << std::endl;
};

template <class T>
void add_t( T &x)
{
    x += 0;
};

#endif