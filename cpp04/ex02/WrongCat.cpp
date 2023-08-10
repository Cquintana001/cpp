#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout<<"WRONGCAT Default constructor called"<<std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
    std::cout<<"WRONGCAT Destructor called"<<std::endl;
}
WrongCat::WrongCat (const WrongCat& src)
{
    std::cout<<"WRONGCAT Copy constructor called"<<std::endl;

    *this =src;
}
WrongCat &WrongCat::operator=(const WrongCat& rhs)
{
    this->_type =rhs._type;
     return(*this);
}
void    WrongCat::makeSound( void ) const
{
    std::cout<<"MEOW MEOW!"<<std::endl;
}