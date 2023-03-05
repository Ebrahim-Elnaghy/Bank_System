#include <iostream>
#include "Validation.h"

#pragma once

using namespace std;

class Person {
private:
	string name;
	int id;
	string password;
	double balance;
public:
	// constructor
	Person();
    Person(string name ,int id, string password,double balance);
	// setters
	void setName(string name);
	void setID(int id);
	void setPassword(string password);
	void setBalance(double balance);
	// getters
	string getName();
	int getID();
	string getPassword();
	double getBalance();
	 void display();
};
