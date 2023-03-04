#include <iostream>
#include "Validation.h"

#pragma once

using namespace std;

class Person {
private:
	string name;
	int id;
	string password;
public:
	// constructor
    Person();
    Person(string name ,int id, string password);
	// setters
	void setName(string name);
	void setID(int id);
	void setPassword(string password);
	// getters
	string getName();
	int getID();
	string getPassword();
	void display();
};
