#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string firstName,std::string lastName,std::string nickname,int phoneNumber,std::string darkestSecret):_nickname(nickname)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_darkestSecret = darkestSecret;
    this->_phoneNumber = phoneNumber;
    std::cout<< "Contacto instanciado "<< this->_firstName<<std::endl;
}
Contact::Contact(){std::cout<< "Contact default constructor called"<<std::endl;}
Contact::~Contact()
{
    std::cout<< this->_firstName<<" fue destruido"<<std::endl;
}
void Contact::setFirstName(std::string firstName1)
{
    this->_firstName = firstName1;
}

std::string Contact::getFirstName()
{
    return(this->_firstName);  
}

void Contact::displayContact(int index)
{
    std::cout<<index<<"|"<<this->_firstName<<"|"<<this->_lastName<<"|"<<this->_nickname<<std::endl;
   
}