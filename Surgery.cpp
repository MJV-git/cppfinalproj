#include "Surgery.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor to set surgery type and price
Surgery::Surgery(int surgeryType) : surgeryType(surgeryType), surgeryPrice(0.0) {
    switch (surgeryType) {
        case 1:
            surgeryName = "Maxillofacial Reconstruction";
        surgeryPrice = 5000.0;
        break;
        case 2:
            surgeryName = "Gastric Balloon";
        surgeryPrice = 3000.0;
        break;
        case 3:
            surgeryName = "Rhinoplasty";
        surgeryPrice = 4000.0;
        break;
        case 4:
            surgeryName = "Alveoplasty";
        surgeryPrice = 2500.0;
        break;
        case 5:
            surgeryName = "Rhytidectomy";
        surgeryPrice = 7000.0;
        break;
        default:
            surgeryName = "Unknown";
        surgeryPrice = 0.0;
        cout << "Invalid Surgery Type Selected!" << endl;
        break;
    }
}

// Returns the name of the surgery
string Surgery::getSurgeryName() const {
    return surgeryName;
}

// Applies the surgery price to the patient's account
void Surgery::applyChargeToAccount(Account &account) {
    account.addCharges(surgeryPrice);
}
