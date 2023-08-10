#ifndef CAT_HPP
#define CAT_HPP


#include <iostream>
#include "AAnimal.hpp"

class Cat : public AAnimal
{
    private:
        Brain *_brain;

    public:

    Cat(void);

    ~Cat(void);

    Cat (const Cat& src);
    Cat& operator=(const Cat& rhs);

    void    makeSound( void ) const;

};
#endif