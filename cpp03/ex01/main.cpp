
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap carlos( "Carlos" );
    ScavTrap carlos2( carlos );

    carlos.attack( "the air" );
    carlos.takeDamage( 10 );
    carlos2.beRepaired( 10 );
    carlos2.guardGate();

    return 0;
}