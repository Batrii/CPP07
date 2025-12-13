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
    //--------------------------------------------------
    try{
        Array<std::string> strArr(3);
        strArr[0] = "Hello";
        strArr[1] = "World";
        strArr[2] = "!";
        unsigned int i = 0;
        while (i < strArr.size())
        {
            std::cout << strArr[i] << " ";
            i++;
        }
        std::cout << std::endl;
    }catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    //--------------------------------------------------

    try{
        Array<double> emptyArr;
        std::cout << "Size of emptyArr: " << emptyArr.size() << std::endl;
        std::cout << emptyArr[0] << std::endl;
    }catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}