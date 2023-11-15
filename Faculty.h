#include <string>
#include "Person.h"
#pragma once
using namespace std;
class Faculty : virtual public Person{
protected:
    string department, office, email, officePhone;
public:
    Faculty();
    Faculty(string firstname, string lastname, string streetaddress, string city, string state, string zipcode,
            string phone, int age, string department, string office, string email, string officePhone);
    Faculty(string department, string office, string email, string officePhone);
    virtual void printPersonalInfo();
    void printFacultyInfo();
};
