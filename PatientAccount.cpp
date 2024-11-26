#include "PatientAccount.h"

// Constructor for patient account
PatientAccount::PatientAccount(string name): daysInHospital(0), dailyRate(0), costOfStay(0) {
}

// Getters
int PatientAccount::getStayLength()  {
    return daysInHospital;
}

double PatientAccount::getDailyRate()  {
    return dailyRate;
}

// Setters

void PatientAccount::setStayLength(int stayLength) {
    PatientAccount::daysInHospital = stayLength;
}

void PatientAccount::setDailyRate(double dailyRate) {
    PatientAccount::dailyRate = dailyRate;
}

// Total cost calculation
double PatientAccount::calculateTotal()  {
    return dailyRate * daysInHospital;
}

