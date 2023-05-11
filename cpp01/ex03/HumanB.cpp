#include "HumanB.hpp"

void HumanB::attack()
    {
        std::cout<<this->name <<" attacks with their "<<this->weapon->getType()<<  std::endl;;
    }

HumanB::HumanB(std::string name1) :  name(name1)
{
}
 void HumanB::setWeapon(Weapon weapon1)
 {
    *(this->weapon) = weapon1;
 }