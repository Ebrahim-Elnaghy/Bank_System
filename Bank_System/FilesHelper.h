#include <iostream>
#include <vector>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "BankData.h"
#pragma once
using namespace std;

class FilesHelper {
public:
    static void saveLast(string fileName, int id);
    static int getLast(string fileName);
    static void saveClient(Client c);
    static void saveEmployee(string fileName, string lastIdFile, Employee e);
    static void getClients();
    static void getEmployees();
    static void getAdmins();
    static void clearFile(string fileName, string lastIdFile);
};
