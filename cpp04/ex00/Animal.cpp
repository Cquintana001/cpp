#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout<<"Default constructor called"<<std::endl;
      this->_type = "Animal";
}
Animal::Animal(std::string type)
{
    std::cout<<"Not default Constructor"<<std::endl;
    this->_type=type;
}
Animal::~Animal(void)
{
    std::cout<<"Destructor called"<<std::endl;
}
Animal::Animal (const Animal& src)
{
    std::cout<<"Copy constructor called"<<std::endl;

    *this =src;
}
Animal &Animal::operator=(const Animal& rhs)
{
    this->_type =rhs._type;
    return(*this);
}
void    Animal::makeSound( void ) const
{
    std::cout<<"RROAARRRRR"<<std::endl;
}
std::string     Animal::getType( void ) const
{
    return(this->_type);
} 