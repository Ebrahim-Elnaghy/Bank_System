#include "Person.h"
// constructor
Person::Person() {};
Person::Person(string name = "N/A", int id = 0, string password = "N/A", double balance = 0.0) {
	setName(name);
	setID(id);
	setPassword(password);
	setBalance(balance);
}

// setters
void Person::setName(string name) {
	if (Validation::validateName(name)) {
		this->name = name;
	}
	else {
		cout << "Name is invalid." << endl;
	}
}

void Person::setID(int id) {
	this->id = id;
}

void Person::setPassword(string password) {
	if (Validation::validatePassword(password)) {
		this->password = password;
	}
	else {
		cout << "Password is invalid." << endl;
	}
}

void Person::setBalance(double balance) {
	if (Validation::validateBalance(balance)) {
		this->balance = balance;
	}
	else {
		cout << "Client balance is insufficient. The minimum balance required is 1500." << endl;
	}
}

// getters
string Person::getName() {

	return this->name;
}

int Person::getID() {
	return this->id;
}

string Person::getPassword() {
	return this->password;
}

double Person::getBalance() {
	return this->balance;
}

void Person::display() {
	cout << "Name: " << getName() << endl;
	cout << "ID: " << getID() << endl;
	cout << "Balance: " << getBalance() << endl;

}
