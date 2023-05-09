#include "Zombie.hpp"
#include <iostream>

int main()
{
    randomChump("Brian");
    Zombie *Yeray =newZombie("Yeray");
    Yeray->announce();
    delete (Yeray);
    std::cout <<"Programa finalizado"<<  std::endl;
    return(0);


}