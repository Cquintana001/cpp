#include "PhoneBook.hpp"
#include <iostream>

int main()
{

    PhoneBook agenda = PhoneBook();
    std::string cmd;
    cmd =""; 
    while(cmd !="EXIT")
    {
    std::cout<<"Enter a command"<<std::endl;
    std::getline(std::cin,cmd);
    if(cmd == "ADD")
        agenda.add();
    else if(cmd == "SEARCH")
        agenda.search();
    else if(cmd !="EXIT")
        std::cout<<"Command not valid. Try again."<<std::endl;
    
    }
}
