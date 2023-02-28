#include "Employee.h"



int Employee::count = 1000;
// constructor
Employee::Employee() : Person() {
    this->salary = 0.0;
    count++;
    this->id = count;
};
Employee:: Employee(string name , string password, double salary) : Person(name , password) {
    setSalary(salary);
    count++;
    this->id = count;
}
// setters
void Employee:: setSalary(double salary) {
    if (Validation::validateEmployeeSalary(salary)) {
        this->salary = salary;
    }
    else {
        cout << "Invalid salary The minimum salary  is 5000." << endl;
    }
}

// getters
double Employee:: getSalary() {
    return this->salary;
}

// display employee info
void Employee:: display() {
    cout << "Name: " << getName() << endl;
    cout << "Id: " << getId() << endl;
    cout << "Salary: " << getSalary() << endl;
}
