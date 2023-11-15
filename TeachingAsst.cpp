#include "TeachingAsst.h"
#include <iostream>

using namespace std;
TeachingAsst::TeachingAsst() : Student(), Faculty(){
    courseLoad = 0;
}

TeachingAsst::TeachingAsst(string firstname, string lastname, string streetaddress, string city, string state,
                           string zipcode, string phone, int age, string classRank, float gpa, string major,
                           string minor, int credits, string department, string office, string email,
                           string officePhone, int courseLoad)
                           : Person(firstname, lastname, streetaddress, city, state, zipcode, phone, age),
                           Student(classRank, gpa, major, minor, credits),
                           Faculty(department, office, email, officePhone){
    this->courseLoad = courseLoad;
}

void TeachingAsst::printPersonalInfo() {
    Person::printPersonalInfo();
    printStudentInfo();
    printFacultyInfo();
    cout << "Course Load: " << courseLoad << endl;
}
