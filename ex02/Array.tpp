#include "Array.hpp"

template <typename T>
Array<T>::Array(){
    this->arr = NULL;
    this->n = 0;
    std::cout << "default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n){
    this->n = n;
    this->arr = new T[n];
    std::cout << "constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array& other){
    this->n = other.n;
    this->arr = new T[other.n];
    int i = 0;
    while (i < other.n)
    {
        this->arr[i] = other.arr[i];
        i++;
    }
    std::cout << "copy constructor called" << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other){
    if (this != &other)
    {
        delete[] this->arr;
        this->n = other.n;
        if (other.n == 0)
            this->arr = NULL;
        else{
            this->arr = new T[other.n];
            int i = 0;
            while (i < static_cast<int>(other.n))
            {
                this->arr[i] = other.arr[i];
                i++;
            }
        }
    }
    std::cout << "assignement operator called" << std::endl;
    return (*this);
}

template <typename T>
T& Array<T>::operator[](int index){
    if (index < 0 || index >= static_cast<int>(this->n))
        throw std::out_of_range("the index is out of range");
    return (this->arr[index]);
}

template <typename T>
const T& Array<T>::operator[](int index) const{
    if (index < 0 || index >= static_cast<int>(this->n))
        throw std::out_of_range("the index is out of range");
    return (this->arr[index]);
}

template <typename T>
Array<T>::~Array(){
    delete[] this->arr;
    std::cout << "destructor called" << std::endl;
}

template <typename T>
unsigned int Array<T>::size() const{
    return (this->n);
}