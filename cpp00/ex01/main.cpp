#include "PhoneBook.hpp"
#include <iostream>

int main()
{

    PhoneBook agenda = PhoneBook();
    std::string cmd;
    cmd =""; 
    while(cmd !="EXIT")
    {
    std::cout<<"Introduzca un comando"<<std::endl;
    std::getline(std::cin,cmd);
    if(cmd == "ADD")
        agenda.add();
    else if(cmd == "SEARCH")
        agenda.search(1);
    else
        std::cout<<"Comando incorrecto vuelva a intentarlo."<<std::endl;
    
    }
    //agenda.exit(); 
}
