#include "Client.h"
// constructor
Client::Client() {};
Client::Client(string name, int id, string password, double balance) : Person(name ,id,password,balance) {}
//Methods

// deposit
void Client::deposit(double amount) {
	setBalance(getBalance() + amount);
	cout << "Deposit successful. New balance is: " << getBalance() << endl;
}

// withdraw
void Client::withdraw(double amount) {
	if (getBalance() >= amount) {
		setBalance (getBalance() - amount);
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
	if (getBalance() >= amount) {
		setBalance(getBalance() - amount);
		other.setBalance(other.getBalance() + amount);
		cout << "Transfer successful. New balance is: " << getBalance() << endl;
	}
	else {
		cout << "Transfer failed. Insufficient balance." << endl;
	}
}