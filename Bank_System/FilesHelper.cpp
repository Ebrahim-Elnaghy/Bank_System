#include "FilesHelper.h"
#include "Parser.h"
#include <fstream>

void FilesHelper::saveLast(string fileName, int id) {
	ofstream file;
	file.open(fileName);
	file << id;
	file.close();
}

int FilesHelper::getLast(string fileName) {
	ifstream file;
	file.open(fileName);
	int id;
	file >> id;
	file.close();
	return id;
}

void FilesHelper::saveClient(Client c) {
	int id = getLast("ClientLastId.txt");
	ofstream file;
	file.open("Clients.txt", ios::app);
	file << c.getName() << "," << id + 1 << "," << c.getPassword() << "," << c.getBalance() << endl;
	file.close();
	saveLast("ClientLastId.txt", id+1);
}

void FilesHelper::saveEmployee(string fileName, string lastIdFile, Employee e) {
	int id = getLast(lastIdFile);
	ofstream file;
	file.open(fileName, ios::app);
	file << e.getName() << "," << id+1 << "," << e.getPassword() << "," << e.getSalary() << endl;
	file.close();
	saveLast(lastIdFile, id+1);
}

void FilesHelper::getClients() {
	string line;
	fstream file;
	file.open("Clients.txt", ios::in);
	while (getline(file, line)) {
		Client c = Parser::parseToClient(line);
		clients.push_back(c);
	}
	file.close();
}

void FilesHelper::getEmployees() {
	string line;
	fstream file;
	file.open("Employees.txt", ios::in);
	while (getline(file, line)) {
		Employee e = Parser::parseToEmployee(line);
		employees.push_back(e);
	}
	file.close();
}

void FilesHelper::getAdmins() {
	string line;
	fstream file;
	file.open("Admins.txt", ios::in);
	while (getline(file, line)) {
		Admin a = Parser::parseToAdmin(line);
		admins.push_back(a);
	}
	file.close();
}

void FilesHelper::clearFile(string fileName, string lastIdFile) {
	fstream file_1, file_2;
	file_1.open(fileName, ios::out);
	file_1.close();
	file_2.open(lastIdFile, ios::out);
	if (lastIdFile == "ClientLastId.txt") {
		file_2 << 2000;
	}
	else if (lastIdFile == "EmployeeLastId.txt") {
		file_2 << 1000;
	}
	else if (lastIdFile == "AdminLastId.txt") {
		file_2 << 0;
	}
	file_2.close();
}

 void FilesHelper::saveAllAdmins() {
	for (int i = 0; i < admins.size(); i++) {
		saveEmployee("Admins.txt","AdminLastId.txt", admins[i]);
	}
}

 void FilesHelper::saveAllClients() {
	for (int i = 0; i < clients.size(); i++) {
		saveClient(clients[i]);
	}
}

 void FilesHelper::saveAllEmployees() {
	for (int i = 0; i < employees.size(); i++) {
		saveEmployee("Employees.txt", "EmployeeLastId.txt",employees[i]);
	}
}