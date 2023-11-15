#include "Faculty.h"
#include <iostream>

using namespace std;
Faculty::Faculty() : Person(){
    department = "NONE";
    office = "NONE";
    email = "NONE";
    officePhone = "NONE";
}

Faculty::Faculty(string firstname, string lastname, string streetaddress, string city, string state, string zipcode,
                 string phone, int age, string department, string office, string email, string officePhone)
                 : Person(firstname, lastname, streetaddress, city, state, zipcode, phone, age) {
    this->department = department;
    this->office = office;
    this->email = email;
    this->officePhone = officePhone;
}

Faculty::Faculty(string department, string office, string email, string officePhone){
    this->department = department;
    this->office = office;
    this->email = email;
    this->officePhone = officePhone;
}

void Faculty::printPersonalInfo() {
    Person::printPersonalInfo();
    printFacultyInfo();
}

void Faculty::printFacultyInfo() {
    cout << email << endl;
    cout << department << endl;
    cout << "Office: " << office << " Office Phone: " << officePhone << endl;
}
