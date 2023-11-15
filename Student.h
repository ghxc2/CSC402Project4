#include "Person.h"
#pragma once
class Student : virtual public Person{
protected:
    string classRank, major, minor;
    float gpa;
    int credits;
public:
    Student();
    Student(string firstname, string lastname, string streetaddress, string city, string state, string zipcode,
            string phone, int age, string classRank, float gpa, string major, string minor, int credits);
    Student(string classRank, float gpa, string major, string minor, int credits);
    virtual void printPersonalInfo();
    void printStudentInfo();
};
