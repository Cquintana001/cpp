#include "HumanA.hpp"

std::string HumanA::attack()
    {
        std::cout<<this->name <<"attacks with their"<<this->weapon.getType();
    }

HumanA::HumanA(Weapon& weapon1) : weapon(weapon1)
{
}