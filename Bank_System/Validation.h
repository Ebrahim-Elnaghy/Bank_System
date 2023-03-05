#include <iostream>
#include <regex>
#pragma once

using namespace std;

class Validation {
public:
    static bool validateName(string& name);

    static bool validatePassword(string& password);

    static bool validateBalance(double balance);

    static bool validateSalary(double salary);
};