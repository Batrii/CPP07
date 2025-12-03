#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>


template <typename T> class Array{
    private:
        T* arr;
        unsigned int n;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        T& operator[](int index);
        const T& operator[](int index) const;
        ~Array();
        unsigned int size() const;
};
#include "Array.tpp"



#endif