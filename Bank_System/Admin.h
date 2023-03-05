#include <iostream>
#include "Employee.h"
#pragma once

using namespace std;

class Admin : public Employee {
public:
	// constructor
	Admin();
	Admin(string name, int id, string password,double balance, double salary);
	//Methods
	void addEmployee(Employee& employee);
	Employee* searchEmployee(int id);
	void editEmployee(int id, string name, string password, double salary);
	void listEmployees();

};

