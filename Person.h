#include <string>
#pragma once
using namespace std;
class Person {
protected:
    string firstname, lastname, streetaddress, city, state, zipcode, phone;
    int age;
public:
    Person();
    Person(string firstname, string lastname, string streetaddress, string city, string state, string zipcode,
           string phone, int age);
    virtual void printPersonalInfo();
};
