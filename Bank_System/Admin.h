#include <iostream>
#include "Employee.h"
#pragma once

using namespace std;

class Admin : public Employee {
public:
    // constructor
    Admin(string name, int id, string password, double salary = 5000) : Employee(name, id, password, salary) {}
    //Methods
    void display();
};
