#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename Array, typename Lenght, typename Func>
void iter(Array arr, const Lenght len, Func Function){
    Lenght i = 0;
    while (i < len)
    {
        Function(arr[i]);
        i++;
    }
}




#endif