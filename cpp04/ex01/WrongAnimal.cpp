#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout<<"Default constructor called"<<std::endl;
      this->_type = "WrongAnimal";
}
WrongAnimal::WrongAnimal(std::string type)
{
    std::cout<<"Not default Constructor"<<std::endl;
    this->_type=type;
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout<<"Destructor called"<<std::endl;
}
WrongAnimal::WrongAnimal (const WrongAnimal& src)
{
    std::cout<<"Copy constructor called"<<std::endl;

    *this =src;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal& rhs)
{
    this->_type =rhs._type;
    return(*this);
}
void    WrongAnimal::makeSound( void ) const
{
    std::cout<<"RROAARRRRR"<<std::endl;
}
std::string     WrongAnimal::getType( void ) const
{
    return(this->_type);
} 