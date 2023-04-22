#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>
#include <limits.h>
bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}
PhoneBook::PhoneBook()
{
    this->index = 0;
    this->is_full = false;

}
PhoneBook::~PhoneBook()
{
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
    //Contact contact = Contact(name, last, nickname,tel ,secret);
    if(index == 8 )
    {    
        index = 0;
        is_full = true;
    }
    this->list[index] = Contact(name, last, nickname,tel ,secret);
    

    index++;
}

void PhoneBook::search()
{
    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; (is_full == false && i < index) || (is_full == true && i < 8); i++ )
     this->list[i].displayContact(i);
    std::cout << "|__________|__________|__________|__________|" << std::endl;
    std::cout << "Write an index:" << std::endl;
    std::string index2; 
    std::getline(std::cin,index2);
    long index1 = std::atof(index2.c_str());
    if((is_full == true && index1>7 )||(is_full == false && index1>index ) || INT_MIN>=index1 ||index1>=INT_MAX)
        std::cout << "The contact doesn't exist" << std::endl;
    else
        this->list[index1].showContact(index1);


}
