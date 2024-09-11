#include <iostream>

int main()
{
    std::cout << "hello " << std::endl;

    std::cout << " 2 + 3 " << std::endl;

    // when we write numbers or apply any oprator like +-* in double qoutes " " the compiler will not consider it as a number but as a string. for example:-

    std::cout << 2 + 3 << std::endl;

    std::cout << "the sum of 5 + 5 = " << 5 + 5 << std::endl;
};