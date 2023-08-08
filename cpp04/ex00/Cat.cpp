#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout<<"CAT Default constructor called"<<std::endl;
    this->_type = "Cat";
}

Cat::~Cat(void)
{
    std::cout<<"CAT Destructor called"<<std::endl;
}
Cat::Cat (const Cat& src)
{
    std::cout<<"CAT Copy constructor called"<<std::endl;

    *this =src;
}
Cat &Cat::operator=(const Cat& rhs)
{
    this->_type =rhs._type;
     return(*this);
}
void    Cat::makeSound( void ) const
{
    std::cout<<"MEOW MEOW!"<<std::endl;
}