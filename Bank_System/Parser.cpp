#include "Parser.h"
vector<string> Parser::split(string line) {
	stringstream stream(line);
	string token;

	vector<string> info;
	while (getline(stream, token, ',')) {
		info.push_back(token);
	}
	return info;
}

Client Parser::parseToClient(string line) {
	vector<string> info = split(line);
	Client client;
	client.setName(info[0]);
	client.setID(stoi(info[1]));
	client.setPassword(info[2]);
	client.setBalance( stod(info[3]));
	return client;
}

Employee Parser::parseToEmployee(string line) {
	vector<string> info = split(line);
	Employee employee;
	employee.setName(info[0]);
	employee.setID(stoi(info[1]));
	employee.setPassword(info[2]);
	employee.setBalance(stod(info[3]));
	employee.setSalary(stod(info[4]));
	return employee;
}

Admin Parser::parseToAdmin(string line) {
	vector<string> info = split(line);
	Admin admin;
	admin.setName(info[0]);
	admin.setID(stoi(info[1]));
	admin.setPassword(info[2]);
	admin.setBalance(stod(info[3]));
	admin.setSalary(stod(info[4]));
	return admin;
}


