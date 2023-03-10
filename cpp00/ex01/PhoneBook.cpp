#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}
PhoneBook::PhoneBook()
{
    std::cout<<"PhoneBook default constructor called"<<std::endl;

}
PhoneBook::~PhoneBook()
{
     std::cout<<this->list[0].getFirstName()<<"destruido"<<std::endl;
    std::cout<<"PhoneBook default destructor called"<<std::endl;
}

void PhoneBook::add()
{

      
    std::cout<<"Name"<<std::endl;
    std::string name; 
    std::getline(std::cin,name);
    std::cout<<std::endl; 
    std::cout<<"Last name"<<std::endl;
    std::string last; 
    std::getline(std::cin,last);
    std::cout<<std::endl; 
    std::string telephone; 
    std::cout<<"Telephone number"<<std::endl;
    std::getline(std::cin,telephone);
    std::cout<<std::endl;   
    while(telephone.length()>9 ||!is_digits(telephone))
    {
        std::cout<<"Telephone number not valid please try again:"<<std::endl;
        std::getline(std::cin,telephone); 
        std::cout<<std::endl; 
    }
    std::cout<<"Nickname"<<std::endl;
    std::string nickname; 
    std::getline(std::cin,nickname);
    std::cout<<std::endl; 
    std::cout<<"His darkest secret"<<std::endl;
    std::string secret; 
    std::getline(std::cin,secret);
    std::cout<<std::endl;
    int tel = std::atoi(telephone.c_str());
    Contact contact = Contact(name, last, nickname,tel ,secret);
    this->list[0] = contact;
}
void PhoneBook::search(int index)
{


    std::cout<<"Ha entrado a SEARCH con "<<index<<std::endl;

}
void PhoneBook::exit()
{


    std::cout<<"Ha entrado a EXIT"<<std::endl;

}