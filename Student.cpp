#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(): Person() {
        classRank = "None";
        gpa = 0.0;
        major = "NONE";
        minor = "NONE";
        credits = 0;
}

Student::Student(string firstname, string lastname, string streetaddress, string city, string state, string zipcode,
                 string phone, int age, string classRank, float gpa, string major, string minor, int credits)
        : Person(firstname, lastname, streetaddress, city, state, zipcode, phone, age) {
    this->classRank = classRank;
    this->gpa = gpa;
    this->major = major;
    this->minor = minor;
    this->credits = credits;
}

Student::Student(string classRank, float gpa, string major, string minor, int credits){
    this->classRank = classRank;
    this->gpa = gpa;
    this->major = major;
    this->minor = minor;
    this->credits = credits;
}

void Student::printPersonalInfo() {
    Person::printPersonalInfo();
    printStudentInfo();
}

void Student::printStudentInfo() {
    cout << classRank << " GPA: " << gpa << endl;
    cout << major << " " << minor << endl;
    cout << "Total Credits: " << credits << endl;
}

