#ifndef PHARMACY_H
#define PHARMACY_H

#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

using namespace std;

class Pharmacy {
public:
    int medType;       // Type of medication (1 to 5)
    int medNum;        // Number of medications prescribed
    double medPrice;   // Price of a single unit of medication

    // Constructor
    Pharmacy(int medType, int medNum);

    // Method to apply the charge for the medication to the patient's account
    void prescribeMedication(Account &account);
};

#endif // PHARMACY_H
