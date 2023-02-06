#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    std::cout<<"PhoneBook default constructor called"<<std::endl;

}
PhoneBook::~PhoneBook()
{
    std::cout<<"PhoneBook default destructor called"<<std::endl;
}

void PhoneBook::add()
{

      
    std::cout<<"Name"<<std::endl;
    std::string name; 
    std::cin>>name;
    std::cout<<"Last name"<<std::endl;
    std::string last; 
    std::cin>>last;
    std::string telephone; 
    std::cout<<"Telephone number"<<std::endl;
    std::cin>>telephone;    
    std::cout<<"Nickname"<<std::endl;
    std::string nickname; 
    std::cin>>nickname;
    std::cout<<"His darkest secret"<<std::endl;
    std::string secret; 
    std::cin>>secret;
    std::cout<<telephone<<std::endl;
     
}
void PhoneBook::search(int index)
{


    std::cout<<"Ha entrado a SEARCH con "<<index<<std::endl;

}
void PhoneBook::exit()
{


    std::cout<<"Ha entrado a EXIT"<<std::endl;

}