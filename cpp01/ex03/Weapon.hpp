#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    private:

    std::string type;

    public:

    std::string const &getType();
    void setType(std::string string);
    Weapon(std::string name);
};



#endif