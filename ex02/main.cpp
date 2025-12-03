#include "Array.hpp"

int main(){
    Array<int> obj(4);
    Array<int> obj2(6);
    obj = obj2;
    std::cout << obj.size() << std::endl;
    return 0;
}