#include "Client.h"
#pragma once

using namespace std;

class Employee : public Person {
private:
	double salary;
public:
	// constructor
    Employee();
	Employee(string name,int id, string password, double salary);
	// setters
	void setSalary(double salary);
	// getters
	double getSalary();
	// display employee info
	void display();
	void addClient(Client& client);
	void listClient();
};

static vector<Employee> employees;
static vector<Employee>::iterator employees_iterator;
