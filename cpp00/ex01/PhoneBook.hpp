#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
 
class PhoneBook
{

    private:
        Contact list[8];
        int     index;
        bool    is_full;
    public:
        PhoneBook();
        ~PhoneBook();
        void add();
        void search();
        void exit();

};

#endif