#include "Admin.h"



int Admin::count = 0;
// constructor
Admin::Admin() : Employee() {
    count++;
    this->id = count;
}
Admin:: Admin(string name , string password, double salary) : Employee(name , password , salary) {
    count++;
    this->id = count;
}
//Methods
void Admin:: display() {
    cout << "Name: " << getName() << endl;
    cout << "Id: " << getId() << endl;
    cout << "Salary: " << getSalary() << endl;
}