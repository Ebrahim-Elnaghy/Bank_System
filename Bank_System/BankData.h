#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#pragma once

class BankData
{
public:
	static vector<Client> clients;
	static vector<Client>::iterator clients_iterator;
	static vector<Employee> employees;
	static vector<Employee>::iterator employees_iterator;
	static vector<Admin> admins;
	static vector<Admin>::iterator admins_iterator;
};

