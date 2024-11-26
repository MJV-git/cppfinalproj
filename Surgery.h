#include <string>

#include "Account.h"
#ifndef SURGERY_H
#define SURGERY_H

using namespace std;

class Surgery {
    public:
    int surgeryType;
    string surgeryName;
    double surgeryPrice;
    int surgeryCount;

    explicit Surgery(int surgeryType);

    string getSurgeryName() const;

    void applyChargeToAccount(Account &account);
};



#endif //SURGERY_H
