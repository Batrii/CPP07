#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T> class Array{
    private:
        T* arr;
        unsigned int n;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        Array& operator[](int) const;
        ~Array();
        int size() const;
};



#endif