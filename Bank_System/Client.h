#include <iostream>
#include "Person.h"
#include "Validation.h"
#pragma once

using namespace std;

class Client : public Person {
private:
public:
	// constructor
	Client();
	Client(string name, int id, string password, double balance);
	//Methods
	// deposit
	void deposit(double amount);
	// withdraw
	void withdraw(double amount);
	// check balance
	void checkBalance();
	// transfer money to another client
	void transfer(Client& other, double amount);
	// display Client info
};