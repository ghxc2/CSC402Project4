#include "Student.h"
#include "Faculty.h"
#pragma once
class TeachingAsst : public Student, public Faculty{
protected:
    int courseLoad;
public:
    TeachingAsst();
    TeachingAsst(string firstname, string lastname, string streetaddress, string city, string state, string zipcode,
                 string phone, int age, string classRank, float gpa, string major, string minor, int credits,
                 string department, string office, string email, string officePhone, int courseLoad);
    void printPersonalInfo() override;
};


