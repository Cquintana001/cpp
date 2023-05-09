#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horda = new Zombie[N];
    for (int i = 0; i <N; i++)
    {
       horda[i].setName(name); 
    }
    
    return(horda); 
}