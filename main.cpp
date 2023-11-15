#include <iostream>

#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include "TeachingAsst.h"
#include <vector>
#include <fstream>

using namespace std;
int main() {
    // Making Vector
    vector<Person*> people;

    // Possible Pointers
    Person* P;
    Student* S;
    Faculty* F;
    TeachingAsst* T;

    // Get File to Read
    string name;
    cout << "Please enter a path to a data file:";
    cin >> name;

    // Read file
    ifstream file;
    file.open(name);

    if(file.is_open()){
        while (!file.eof()){
            // Hold possible items
            string firstname, lastname, streetaddress, city, state, zipcode, phone, classRank, major, minor,
                    department, office, email, officePhone, type;
            int age, credits, courseLoad;
            float gpa;

            // Read type
            file >> type;
            // Read Person Info
            file >> firstname >> lastname >> streetaddress >> city >> state >> zipcode >> phone >> age;
            // Read Student Info
            if (type == "S" || type == "T"){
                file >> classRank >> gpa >> major >> minor >> credits;
            }

            // Read Faculty Info
            if (type == "F" || type == "T"){
                file >> department >> office >> email >> officePhone;
            }

            // Read TeachingAsst info
            if (type == "T"){
                file >> courseLoad;
            }

            // Create objects and push to stack
            if (type == "S"){
                S = new Student(firstname, lastname, streetaddress, city, state, zipcode, phone, age, classRank, gpa,
                                major, minor, credits);
                P = S;
                people.push_back(P);
            } else if (type == "F"){
                F = new Faculty(firstname, lastname, streetaddress, city, state, zipcode, phone, age, department,
                                office, email, officePhone);
                P = F;
                people.push_back(P);
            } else if (type == "T"){
                T = new TeachingAsst(firstname, lastname, streetaddress, city, state, zipcode, phone, age,
                                          classRank, gpa, major, minor, credits, department, office, email,
                                          officePhone, courseLoad);
                P = T;
                people.push_back(P);
            } else {

                P = new Person(firstname, lastname, streetaddress, city, state, zipcode, phone, age);
                people.push_back(P);

            }
        }
        file.close();

        // Read data back
        cout << endl;
        for (Person* person : people){
            person->printPersonalInfo();
            cout << endl;
        }
    }
}
