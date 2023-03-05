#include <iostream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;

int main() {
	FileManager::getData();
	Employee e("Ebrahim Elnaghy", 0, "pas123123", 3000, 7000);
	e.listClient();
}
