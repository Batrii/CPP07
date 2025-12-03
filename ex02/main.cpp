#include "Array.hpp"

int main(){
    try{
    Array<int> obj(4);
    Array<int> obj2(6);
    obj = obj2;
    // obj[10] = 5;
    std::cout << obj.size() << std::endl;
    }catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}