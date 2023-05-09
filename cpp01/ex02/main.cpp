#include <iostream>

int main()
{
   std::string salute = "HI THIS IS BRAIN";
   std::string *pointer = &salute;
   std::string &reference = salute;
    std::cout << &salute<<  std::endl;
    std::cout << pointer<<  std::endl;
    std::cout << &reference<<  std::endl;
     std::cout << salute<<  std::endl;
    std::cout << *pointer<<  std::endl;
    std::cout << reference<<  std::endl;
}
