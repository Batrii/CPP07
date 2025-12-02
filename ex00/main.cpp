#include "fun.hpp"

template <typename T> void swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
template <typename T> T min(T a, T b){
    if (a < b)
        return a;
    else
        return b;
}
template <typename T> T max(T a, T b){
    if (a > b)
        return a;
    else
        return b;
}

int main(){

    int a = 10;
    int b = 50;

    swap(a, b);
    std::cout << "after swap: " << std::endl;
    std::cout << "a: " << a << "| b: " << b << std::endl;

    std::cout << "min: " << min<int>(a, b) << std::endl;
    std::cout << "max: " << max<int>(a, b) << std::endl;

}