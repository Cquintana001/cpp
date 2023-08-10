#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout<<"CAT Default constructor called"<<std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::~Cat(void)
{
    std::cout<<"CAT Destructor called"<<std::endl;
     delete  this->_brain;
}
Cat::Cat (const Cat& src)
{
    std::cout<<"CAT Copy constructor called"<<std::endl;

    *this =src;
}
Cat &Cat::operator=(const Cat& rhs)
{
    this->_type =rhs._type;
    this->_brain = new Brain( *rhs._brain );

    return(*this);
}
void    Cat::makeSound( void ) const
{
    std::cout<<"MEOW MEOW!"<<std::endl;
}