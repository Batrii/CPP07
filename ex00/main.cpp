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

// int main(){

//     int a = 10;
//     int b = 50;

//     swap(a, b);
//     std::cout << "after swap: " << std::endl;
//     std::cout << "a: " << a << "| b: " << b << std::endl;

//     std::cout << "min: " << min<int>(a, b) << std::endl;
//     std::cout << "max: " << max<int>(a, b) << std::endl;

// }

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}