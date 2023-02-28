#include <iostream>
#include "Person.h"
#include "Validation.h"
#pragma once

using namespace std;

class Client : public Person {
private:
    double balance;
    static int count;
public:
    // constructor
    Client();
    Client(string name , string password , double balance);
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