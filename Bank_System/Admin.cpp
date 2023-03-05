#include "Admin.h"
#include "BankData.h"



// constructor
Admin::Admin() {};
Admin::Admin(string name, int id, string password,double balance, double salary) : Employee(name, id, password,balance, salary) {}
//Methods

void Admin::addEmployee(Employee& c) {
	BankData::employees.push_back(c);
}

Employee* Admin::searchEmployee(int id) {
	for (BankData::employees_iterator = BankData::employees.begin(); BankData::employees_iterator != BankData::employees.end(); BankData::employees_iterator++) {
		if (BankData::employees_iterator->getID() == id) {
			return BankData::employees_iterator._Ptr;
		}

	}
	return nullptr;
}

void Admin::editEmployee(int id, string name, string password, double salary) {
	Employee* c = searchEmployee(id);
	c->setName(name);
	c->setPassword(password);
	c->setSalary(salary);
}

void Admin::listEmployees() {

	for (BankData::employees_iterator = BankData::employees.begin(); BankData::employees_iterator != BankData::employees.end(); BankData::employees_iterator++) {
		BankData::employees_iterator->display();
		cout << "=================" << endl;
	}
}