#include "Zombie.hpp"
#include <iostream>


Zombie:: ~Zombie()
{
    std::cout << this->name<< " ha sido destruido"<<  std::endl;
}
Zombie:: Zombie()
{
    
   
}
Zombie:: Zombie(std::string name)
{
    this->name = name;
    std::cout << this->name<< " ha aparecido"<<  std::endl;
}
void Zombie::setName(std::string name)
{
    this->name = name;
    std::cout << this->name<< " ha aparecido"<<  std::endl;
}
void Zombie::announce( void )
{
    std::cout << this->name<< ": BraiiiiiiinnnzzzZ..."<<  std::endl;
}
