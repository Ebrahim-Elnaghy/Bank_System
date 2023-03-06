#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#pragma once

class BankData
{
public:
	static vector<Client> clients;
	static vector<Employee> employees;
	static vector<Admin> admins;
};

