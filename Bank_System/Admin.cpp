#include "Admin.h"
#include "BankData.h"
#include "FileManager.h"



// constructor
Admin::Admin() {};
Admin::Admin(string name, int id, string password,double balance, double salary) : Employee(name, id, password,balance, salary) {}
//Methods


//this well bush back to employees vector and save to employees.txt
void Admin::addEmployee(Employee& e) {
	FileManager::addEmployee(e);
}

Employee* Admin::searchEmployee(int id) {
	for (auto& employee : BankData::employees) {
		if (employee.getID() == id) {
			return &employee;
		}
	}
	return nullptr;
}

void Admin::editEmployee(int id, string name, string password, double salary) {
	Employee* e = searchEmployee(id);
	e->setName(name);
	e->setPassword(password);
	e->setSalary(salary);
}

void Admin::listEmployees() {
	for (auto& employee : BankData::employees) {
		employee.display();
		cout << "==============================" << endl;
	}
}