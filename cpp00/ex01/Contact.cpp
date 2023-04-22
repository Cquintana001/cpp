#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(std::string firstName,std::string lastName,std::string nickname,int phoneNumber,std::string darkestSecret):_nickname(nickname)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_darkestSecret = darkestSecret;
    this->_phoneNumber = phoneNumber;
}
Contact::Contact()
{
	return;
}
Contact::~Contact()
{
	return;
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
    
    std::cout << "|" << std::setw(10) << std::setfill(' ') << index;
	if (this->_firstName.length() > 10)
		std::cout << "|" << this->_firstName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << std::setfill(' ') << this->_firstName;
	if (this->_lastName.length() > 10)
		std::cout << "|" << this->_lastName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << std::setfill(' ') << this->_lastName;
	if (this->_nickname.length() > 10)
		std::cout << "|" << this->_nickname.substr(0, 9) << ".|" <<  std::endl;
	else
		std::cout << "|" << std::setw(10) << std::setfill(' ') << this->_nickname << "|" << std::endl;
	return;
}

int	Contact::showContact(int index) const
{
	std::cout << "Index:\t\t" << index << std::endl;
	std::cout << "Name:\t\t" << this->_firstName << std::endl;
	std::cout << "Last Name:\t" << this->_lastName << std::endl;
	std::cout << "Nickname:\t" << this->_nickname << std::endl;
	std::cout << "Phone Number:\t" << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret:\t" << this->_darkestSecret << std::endl;
	return (0);
}