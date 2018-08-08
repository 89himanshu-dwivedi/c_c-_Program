#include <iostream>
#include <array>
#include<thread>

int main()
{
    std::array<int, 5> n = { 1, 2, 3, 4, 5 };
 
    std::cout << n[2] << std::endl;
 
    return 0;
}
