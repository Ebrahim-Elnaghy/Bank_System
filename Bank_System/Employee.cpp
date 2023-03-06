#include "Employee.h"
#include "BankData.h"
#include"FileManager.h"
// constructor
Employee::Employee() {
	salary = 0.0;
};
Employee::Employee(string name, int id, string password, double balance, double salary) : Client(name, id, password, balance) {
	setSalary(salary);
}
// setters
void Employee::setSalary(double salary) {
	if (Validation::validateSalary(salary)) {
		this->salary = salary;
	}
	else {
		cout << "Invalid salary The minimum salary  is 5000." << endl;
	}
}

// getters
double Employee::getSalary() {
	return this->salary;
}

// display employee info
void Employee::display() {
	Client::display();
	cout << "Salary: " << getSalary() << endl;
}

//this well bush back to clients vector and save to clients.txt
void Employee::addClient(Client& client) {
	FileManager::addClient(client);
}

Client* Employee::searchClient(int id) {
	for (auto& Client : BankData::clients) {
		if (Client.getID() == id) {
			return &Client;
		}

	}
	return nullptr;
}

void Employee::listClient() {

	for (auto& Client : BankData::clients) {
		Client.display();
		cout << "==============================" << endl;
	}
}

void Employee::editClient(int id, string name, string password, double balance) {
	Client* c = searchClient(id);
	c->setName(name);
	c->setPassword(password);
	c->setBalance(balance);
}