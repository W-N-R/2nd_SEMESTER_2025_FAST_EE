#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class student {
protected:
    int roll_number;
    string name;
    float cgpa;

public:
    s
    student(int, string, float); // Constructor
    void setroll_num(int);       // Setter
    int getroll_num();           // Getter
};

// Constructor Definition
student::student(int r, string n, float c) {
    roll_number = r;
    name = n;
    cgpa = c;
}

// Setter Function Definition
void student::setroll_num(int r) {
    roll_number = r; // Fixed variable name
}

// Getter Function Definition
int student::getroll_num() {
    return roll_number;
}

// Derived Class
class good_students : public student {
public:
    using student::student; // Inherit constructor
    void display() {
        cout << roll_number;
    }
};

#endif

int main() {

    student fast;

    return 0;
}