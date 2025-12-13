#include "iter.hpp"

int arr_plusone(int a)
{
    a = a + 2;
    std::cout << a << std::endl;
    return a;
}
void Upper(char s)
{
    if (islower(s))
    {
        s = toupper(static_cast<int>(s));
        std::cout << s << std::endl;
    }
    else
        std::cout << s << std::endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    char str[] = "hello";

    iter(arr, 2, arr_plusone);
    std::cout << "---------------------" << std::endl;
    iter(str, 5, Upper);
    return 0;
}