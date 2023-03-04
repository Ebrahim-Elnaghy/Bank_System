#include "Person.h"
// constructor
Person::Person() {
	name = "N/A";
	id = 0;
	password = "N/A";

}
Person::Person(string name,int id, string password) {
	id = 0;
	setName(name);
	setID(id);
	setPassword(password);
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

void Person::display() {
	cout << "Name: " << getName() << endl;
	cout << "ID: " << getID() << endl;
}
