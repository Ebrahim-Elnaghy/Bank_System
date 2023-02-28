#include <iostream>
#include "Validation.h"

#pragma once

using namespace std;

class Person {
private:
    string name;
    string password;
protected:
    int id;

public:
    // constructor
    Person();
    Person(string name , string password);
    // setters
    void setName(string name);
    void setPassword(string password);
    // getters
    string getName();
    int getId();
    string getPassword();
    virtual void display() = 0;
};
