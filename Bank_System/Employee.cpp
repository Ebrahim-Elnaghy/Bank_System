#include "Employee.h"



// constructor
Employee::Employee() : Person() {
	salary = 0.0;
}
Employee::Employee(string name,int id, string password, double salary) : Person(name,id, password) {
	setSalary(salary);
}
// setters
void Employee::setSalary(double salary) {
	if (Validation::validateEmployeeSalary(salary)) {
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
	Person::display();
	cout << "Salary: " << getSalary() << endl;
}

void Employee::addClient(Client& client) {
	clients.push_back(client);
}

void Employee::listClient() {
	
	for (clients_iterator = clients.begin(); clients_iterator != clients.end(); clients_iterator++) {
		clients_iterator->display();
		cout << "=================" << endl;
	}
}