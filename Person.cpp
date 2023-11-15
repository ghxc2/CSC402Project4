#include "Person.h"
#include <iostream>

using namespace std;
Person::Person() {
    firstname = "FIRST";
    lastname = "LAST";
    streetaddress = "NONE";
    city = "NONE";
    state = "NONE";
    zipcode = "00000";
    phone = "000-000-0000";
    age = 0;
}

Person::Person(string firstname, string lastname, string streetaddress, string city, string state, string zipcode,
               string phone, int age) {
    this->firstname = firstname;
    this->lastname = lastname;
    this->streetaddress = streetaddress;
    this->city = city;
    this->state = state;
    this->zipcode = zipcode;
    this->phone = phone;
    this->age = age;
}

void Person::printPersonalInfo() {
    cout << firstname << ", " << lastname << endl;
    cout << streetaddress << endl;
    cout << city << ", " << state << ", " << zipcode << endl;
    cout<< phone << " AGE: " << age << endl;
}

