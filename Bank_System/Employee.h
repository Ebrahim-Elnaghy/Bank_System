#include "Client.h"
#pragma once

using namespace std;

class Employee : public Client {
private:
	double salary;
public:
	// constructor
	Employee();
	Employee(string name, int id, string password, double balance, double salary);
	// setters
	void setSalary(double salary);
	// getters
	double getSalary();
	// display employee info
	void display();
	void addClient(Client& client);
	Client* searchClient(int id);
	void listClient();
	void editClient(int id, string name, string password, double balance);
};


