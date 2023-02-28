#include <iostream>
#include "Person.h"
#pragma once

using namespace std;

class Employee : public Person {
private:
    double salary;
    static int count;
public:
    // constructor
    Employee();
    Employee(string name , string password , double salary);
    // setters
    void setSalary(double salary);
    // getters
    double getSalary();
    // display employee info
    void display();
};