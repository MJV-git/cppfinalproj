#include "Account.h"
#include <iostream>
using namespace std;

int IDCount = 0;


Account::Account() : totalCharges(0.0), id(IDCount++){
}

void Account::addCharges(double charge) {
    totalCharges += charge;
}
void Account::removeCharges(double charge) {
    totalCharges -= charge;
}

double Account::getTotalCharges() const {
    return totalCharges;
}

int Account::getId() const {
    return id;
}



