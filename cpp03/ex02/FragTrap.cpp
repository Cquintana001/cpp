
#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "< FragTrap > - " << this->_name << " constructed." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "< FragTrap > - " << this->_name << " destructed." << std::endl;
}

void    FragTrap::attack( std::string const& target ) {
    if ( this->_energyPoints <= 0 ) {
        std::cout << "< FragTrap > - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "< FragTrap > - " << this->_name << " attacks " << target << " at range, causing " << this->_attackDamage << " points of damage !" << std::endl;
    this->_energyPoints -= 1;
}

void    FragTrap::highFivesGuys() {
    std::cout << "< FragTrap > - " << this->_name << " displays a positive high fives request on the standard output." << std::endl;
}