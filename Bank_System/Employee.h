#include <iostream>
#include "Person.h"
#pragma once

using namespace std;

class Employee : public Person {
private:
    double salary;
public:
    // constructor
    Employee(string name, int id, string password, double salary = 5000 ) : Person(name, id, password) {
        setSalary(salary);
    }
    // setters
    void setSalary(double salary);
    // getters
    double getSalary();
    // display employee info
    void display();
};