#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
   private:
   std::string name;
    Weapon &weapon;
    public:
    HumanA(Weapon& weapon1);
    
    std::string attack();

};

#endif