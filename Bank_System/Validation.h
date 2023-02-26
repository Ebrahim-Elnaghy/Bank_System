#include <iostream>
#include <regex>
#pragma once

using namespace std;

class Validation {
public:
    static bool validateName(string& name);

    static bool validatePassword(string& password);

    static bool validateClientBalance(double balance);

    static bool validateEmployeeSalary(double salary);
};