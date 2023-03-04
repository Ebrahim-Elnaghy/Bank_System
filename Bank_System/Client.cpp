#include "Client.h"
// constructor
Client::Client() : Person() {
    this->balance = 0.0;
}
Client:: Client(string name ,string password , double balance) : Person(name ,0,password) {
	setBalance(balance);
}
// setters and getters
void Client::setBalance(double balance) {
	if (Validation::validateClientBalance(balance)) {
		this->balance = balance;
	}
	else {
		cout << "Client balance is insufficient. The minimum balance required is 1500." << endl;
	}
}
double Client::getBalance() {
	return this->balance;
}

//Methods

// deposit
void Client::deposit(double amount) {
	this->balance += amount;
	cout << "Deposit successful. New balance is: " << getBalance() << endl;
}

// withdraw
void Client::withdraw(double amount) {
	if (this->balance >= amount) {
		this->balance -= amount;
		cout << "Withdrawal successful. New balance is: " << getBalance() << endl;
	}
	else {
		cout << "Withdrawal failed. Insufficient balance." << endl;
	}
}

// check balance
void Client::checkBalance() {
	cout << "Balance: " << getBalance() << endl;
}

// transfer money to another client
void Client::transfer(Client& other, double amount) {
	if (this->balance >= amount) {
		this->balance -= amount;
		other.balance += amount;
		cout << "Transfer successful. New balance is: " << getBalance() << endl;
	}
	else {
		cout << "Transfer failed. Insufficient balance." << endl;
	}
}
// display Client info
void Client::display() {
	Person::display();
	cout << "Balance: " << getBalance() << endl;
}