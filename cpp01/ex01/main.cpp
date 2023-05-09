#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie *horda = zombieHorde(10, "Jonazan");

    for (int i = 0; i < 10; i++)
    {
        horda[i].announce();
       
    }
        delete [] horda;
    
    return(0);

}