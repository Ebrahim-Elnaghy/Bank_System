#include <iostream>
#include "Employee.h"
#pragma once

using namespace std;

class Admin : public Employee {
private:
    static int count;
public:
    // constructor
    Admin();
    Admin(string name , string password, double salary);
    //Methods
    void display();
};
