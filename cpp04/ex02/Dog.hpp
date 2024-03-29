#ifndef DOG_HPP
#define DOG_HPP


#include <iostream>
#include "AAnimal.hpp"

class Dog : public AAnimal
{
    private:

    Brain *_brain;

    public:

    Dog(void);

    ~Dog(void);

    Dog (const Dog& src);
    Dog& operator=(const Dog& rhs);

    void    makeSound( void ) const;

};
#endif