#pragma once
#include <string>
 
class User
{
public:
    void UserRegistration(std::string login) {
        this->login = login;
    }
 
private:
    std::string login;
};