#include "Employee.h"
#include "BankData.h"
#include "FilesHelper.h"



// constructor
Employee::Employee() {};
Employee::Employee(string name, int id, string password, double balance, double salary = 0) : Client(name, id, password, balance) {
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

void Employee::addClient(Client& client) {
	BankData::clients.push_back(client);
}

Client* Employee::searchClient(int id) {
	for (BankData::clients_iterator = BankData::clients.begin(); BankData::clients_iterator != BankData::clients.end(); BankData::clients_iterator++) {
		if (BankData::clients_iterator->getID() == id) {
			return BankData::clients_iterator._Ptr;
		}

	}
	return nullptr;
}

void Employee::listClient() {

	for (BankData::clients_iterator = BankData::clients.begin(); BankData::clients_iterator != BankData::clients.end(); BankData::clients_iterator++) {
		BankData::clients_iterator->display();
		cout << "==============================" << endl;
	}
}

void Employee::editClient(int id, string name, string password, double balance) {
	Client* c = searchClient(id);
	c->setName(name);
	c->setPassword(password);
	c->setBalance(balance);
}