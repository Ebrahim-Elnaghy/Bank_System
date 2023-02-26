#include <iostream>
#include "Person.h"
#include "Validation.h"
#pragma once

using namespace std;

class Client : public Person {
private:
    double balance;

public:
    // constructor
    Client(string name, int id, string password, double balance = 1500 ) : Person(name, id, password) {
        setBalance(balance);
    }
    // setters and getters
    void setBalance(double balance);
    double getBalance();
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
    void display();
};