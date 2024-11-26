#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include <string>

#include "Account.h"
using namespace std;


class PatientAccount : public Account{
    private:
    int daysInHospital;
    double dailyRate;
    double costOfStay;
    string name;


    public:

    PatientAccount(string name);

    int getStayLength();

    double getDailyRate();

    void setStayLength(int stayLength);

    void setDailyRate(double dailyRate);

    double calculateTotal();

};



#endif //PATIENTACCOUNT_H
