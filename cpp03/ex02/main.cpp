
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main( void )
{
    ScavTrap carlos( "Carlos" );
    ScavTrap carlos2( carlos );

    carlos.attack( "the air" );
    carlos.takeDamage( 10 );
    carlos2.beRepaired( 10 );
    carlos2.guardGate();

    FragTrap diegu( "Diegu" );
    FragTrap diegu2( diegu );

    diegu.attack( "the air" );
    diegu.takeDamage( 10 );
    diegu2.beRepaired( 10 );
    diegu2.highFivesGuys();
    return 0;
}