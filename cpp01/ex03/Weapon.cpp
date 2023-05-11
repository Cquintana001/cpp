#include "Weapon.hpp"

const std::string  & Weapon::getType()
{
    return this->type;
}
Weapon:: Weapon(std::string name)
{
    this->type = name;
}
void Weapon::setType(std::string string)
{
    this->type = string;
}