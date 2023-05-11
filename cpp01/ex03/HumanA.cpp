#include "HumanA.hpp"

void HumanA::attack()
    {
        std::cout<<this->name <<" attacks with their "<<this->weapon.getType()<< std::endl;;
    }

HumanA::HumanA(std::string name1, Weapon& weapon1) : name(name1 ), weapon(weapon1)
{
}