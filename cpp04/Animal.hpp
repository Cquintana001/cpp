#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
    std::string _type

    public:

    Animal(void);
    Animal(std::string type);

    virtual ~Animal(void);

    Animal (const Animal& src);
    Animal& operator=(const Animal& rhs);
}

#endif