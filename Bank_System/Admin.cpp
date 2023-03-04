#include "Admin.h"



// constructor
Admin::Admin() : Employee() {}
Admin::Admin(string name,int id,string password, double salary) : Employee(name,id,password, salary){
}
//Methods
void Admin::display() {
	Person::display();
	cout << "Salary: " << getSalary() << endl;
}

void Admin::listEmployees() {

	for (employees_iterator = employees.begin(); employees_iterator != employees.end(); employees_iterator++) {
		employees_iterator->display();
		cout << "=================" << endl;
	}
}

Employee* Admin:: searchEmployee(int id)
{
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].getID() == id)
        {
            Employee* c = &employees[i];
            cout << "found";
            return c;
        }
    }
    return nullptr;
}
