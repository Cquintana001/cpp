#include <iostream>

int main()
{
   std::string salute = "HI THIS IS BRAIN";
   std::string *pointer = &salute;
   std::string &reference = salute;
    std::cout<<"El puntero del string salute es: " << &salute<<  std::endl;
    std::cout<<"El puntero del string *pointer es: " << pointer<<  std::endl;
    std::cout<<"El puntero del string &pointer es: " << &reference<<  std::endl;
     std::cout << salute<<  std::endl;
    std::cout << *pointer<<  std::endl;
    std::cout << reference<<  std::endl;
}
