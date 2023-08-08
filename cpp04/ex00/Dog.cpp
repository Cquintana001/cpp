#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout<<"DOG Default constructor called"<<std::endl;
     this->_type = "Dog";
}

Dog::~Dog(void)
{
    std::cout<<"DOG Destructor called"<<std::endl;
}
Dog::Dog (const Dog& src)
{
    std::cout<<"DOG Copy constructor called"<<std::endl;

    *this =src;
}
Dog &Dog::operator=(const Dog& rhs)
{
    this->_type =rhs._type;
     return(*this);
}
void    Dog::makeSound( void ) const
{
    std::cout<<"GUAU GUAU!"<<std::endl;
}
