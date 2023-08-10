#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout<<"Default constructor called"<<std::endl;
      this->_type = "AAnimal";
}
AAnimal::AAnimal(std::string type)
{
    std::cout<<"Not default Constructor"<<std::endl;
    this->_type=type;
}
AAnimal::~AAnimal(void)
{
    std::cout<<"Destructor called"<<std::endl;
}
AAnimal::AAnimal (const AAnimal& src)
{
    std::cout<<"Copy constructor called"<<std::endl;

    *this =src;
}
AAnimal &AAnimal::operator=(const AAnimal& rhs)
{
    this->_type =rhs._type;
    return(*this);
}
std::string     AAnimal::getType( void ) const
{
    return(this->_type);
} 