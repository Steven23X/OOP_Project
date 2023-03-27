#include "../Headers/TF_Customer.hpp"
#include <iostream>

TF_Customer::TF_Customer() : first_name(""), last_name(""), address(""), email(""), budget(0) {}

TF_Customer::TF_Customer(TF_String &first_name, TF_String &last_name, TF_String &address, TF_String &email, int budget)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->address = address;
    this->email = email;
    this->budget = budget;
}

TF_Customer::TF_Customer(TF_Customer &other)
{
    this->first_name = other.first_name;
    this->last_name = other.last_name;
    this->address = other.address;
    this->email = other.email;
    this->budget = other.budget;
}

TF_Customer::~TF_Customer() {}

std::istream &operator>>(std::istream &in, TF_Customer &object)
{
    std::cout << "Enter First Name: ";
    in >> object.first_name;
    std::cout << "Enter Last Name: ";
    in >> object.last_name;
    std::cout << "Enter Address: ";
    in >> object.address;
    std::cout << "Enter Email: ";
    in >> object.email;
    std::cout << "Enter Budget: ";
    in >> object.budget;
    return in;
}
std::ostream &operator<<(std::ostream &out, const TF_Customer &object)
{
    out << "Name: " << object.first_name << " " << object.last_name << std::endl;
    out << "Address: " << object.address << std::endl;
    out << "Email: " << object.email << std::endl;
    out << "Budget: " << object.budget << "$" << std::endl;
    return out;
}