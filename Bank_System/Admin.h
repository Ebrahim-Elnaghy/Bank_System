#include <iostream>
#include "Employee.h"
#pragma once

using namespace std;

class Admin : public Employee {
public:
	// constructor
	Admin();
	Admin(string name,int id, string password, double salary);
	//Methods
	void display();
	void listEmployees();
	Employee* searchEmployee(int id);
};

static vector<Admin> admins;
static vector<Admin>::iterator admins_iterator;