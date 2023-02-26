#include "Validation.h"


     bool Validation:: validateName( string& name) {
        // Name must contain only alphabetic characters
        // and have a length between 5 and 20 characters
        regex pattern("^[a-zA-Z]{5,20}$");
        return regex_match(name, pattern);
    }

     bool Validation:: validatePassword( string& password) {
        // Password must have a length between 8 and 20 characters
        // and contain at least one uppercase letter, one lowercase letter,
        // one digit, and one special character
        regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,20}$");
        return regex_match(password, pattern);
    }

     bool Validation:: validateClientBalance(double balance) {
        // Client must have a minimum balance of 1500
        return (balance >= 1500);
    }

     bool Validation:: validateEmployeeSalary(double salary) {
        // Employee must have a minimum salary of 5000
        return (salary >= 5000);
    }
