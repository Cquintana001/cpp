#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string _firstName; 
    std::string _lastName; 
    std::string _nickname; 
    int _phoneNumber;
    std::string _darkestSecret;
public:
    Contact(std::string firstName,std::string lastName,std::string nickname,int phoneNumber,std::string darkestSecret);
    ~Contact();
    Contact();
    void setFirstName(std::string firstName1);
    std::string getFirstName(); 
   void displayContact(int index);
   int showContact(int index) const;

};
#endif
