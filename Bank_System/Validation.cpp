#include "Validation.h"


bool Validation::validateName(string& name) {
    // Name must contain only alphabetic characters
    // and have a length between 5 and 20 characters
    regex pattern("^[a-zA-Z]{5,20}$");
    return regex_match(name, pattern);
}

bool Validation::validatePassword(string& password) {
    // Password must be with min size 8 and max size 20
    regex pattern("^.{8,20}$");
    return regex_match(password, pattern);
}

     bool Validation:: validateClientBalance(double balance) {
         // Client must have a minimum balance of 1500
         if (balance >= 1500) {
             return true;
         }
         else {
             return false;
         }
    }

     bool Validation:: validateEmployeeSalary(double salary) {
         // Employee must have a minimum salary of 5000
         if (salary >= 5000) {
             return true;
         }
         else {
             return false;
         }
    }
