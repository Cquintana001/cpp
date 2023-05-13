#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "A wild Harl has appeared!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Wild Harl flew away!" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "Debug: I just realized my burger order is longer than my shopping list." << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info: I'm glad this burger place doesn't charge me for extra napkins." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning: I always check my order twice, but if it's wrong again, I'm done with this place." << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error: You gave me the wrong burger again? That's it, I'm going to the competition." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr_complain[i])();
			break;
		}
	}
}