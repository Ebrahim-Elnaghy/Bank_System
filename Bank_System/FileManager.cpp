#include "FileManager.h"
void FileManager::addClient(Client client) {
	BankData::clients.push_back(client);
	FilesHelper::saveClient(client);
}
void FileManager::addEmployee(Employee employee) {
	BankData::employees.push_back(employee);
	FilesHelper::saveEmployee("Employees.txt", "EmployeeLastId.txt", employee);
}

void FileManager::addAdmin(Admin admin) {
	FilesHelper::saveEmployee("Admins.txt", "AdminLastId.txt", admin);
}

void FileManager::getAllClients() {
	 FilesHelper::getClients();
}

void FileManager::getAllEmployees() {
	FilesHelper::getEmployees();
}

void FileManager::getAllAdmins() {
	FilesHelper::getAdmins();
}

 void FileManager::getData() {
	getAllClients();
	getAllEmployees();
	getAllAdmins();
}



void FileManager::removeAllClients() {
	FilesHelper::clearFile("Clients.txt", "ClientLastId.txt");
}

void FileManager::removeAllEmployees() {
	FilesHelper::clearFile("Employees.txt", "EmployeeLastId.txt");
}

void FileManager::removeAllAdmins() {
	FilesHelper::clearFile("Admins.txt", "AdminLastId.txt");
}