#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout <<"Brain appears."<< std::endl;
}

Brain::~Brain(void)
{
    std::cout<<"Brain disappears."<< std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "Brain copy called"<< std::endl;
    *this = src;    
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain equal operator called"<< std::endl;

    if(this != &src)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->_ideas[i] = src._ideas[i];
        }
        
    }
    return *this;

}