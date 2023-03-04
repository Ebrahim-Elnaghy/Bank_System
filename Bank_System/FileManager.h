#pragma once
#include "DataSourceInterface.h"
#include "FilesHelper.h"

class FileManager : public DataSourceInterface {
public:
	static void addClient(Client client);
	static void addEmployee(Employee employee);
	static void addAdmin(Admin admin);
	static void getAllClients();
	static void getAllEmployees();
	static void getAllAdmins();
	static void removeAllClients();
	static void removeAllEmployees();
	static void removeAllAdmins();
	static void saveData();
	static void getData();
};
