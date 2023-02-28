#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "Validation.h"
using namespace std;


int main() {

	//testing id Generator
	Client c1,c2;
	Employee e1,e2;
	Admin a1,a2;
	c1.setName("Client");
	e1.setName("Employee");
	a1.setName("Admiin");

	c2.setName("Client");
	e2.setName("Employee");
	a2.setName("Admiin");

	c1.display();
	cout << "=======================" << endl;
	e1.display();
	cout << "=======================" << endl;
	a1.display();
	cout << "============================================================" << endl;

	c2.display();
	cout << "=======================" << endl;
	e2.display();
	cout << "=======================" << endl;
	a2.display();

}
