#include "Admin.h"

//Methods
void Admin:: display() {
    cout << "Name: " << getName() << endl;
    cout << "Id: " << getId() << endl;
    cout << "Password: " << getPassword() << endl;
    cout << "Salary: " << getSalary() << endl;
}