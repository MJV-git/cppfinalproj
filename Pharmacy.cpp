#include "Pharmacy.h"
#include <iostream>
using namespace std;

Pharmacy::Pharmacy(int medType, int medNum) : medType(medType), medNum(medNum), medPrice(0.0) {
    // Set the price based on the medication type
    switch (medType) {
        case 1:
            medPrice = 20.0; // Antibiotics
        break;
        case 2:
            medPrice = 50.0; // Painkillers
        break;
        case 3:
            medPrice = 100.0; // Antifungal
        break;
        case 4:
            medPrice = 30.0; // Antihistamine
        break;
        case 5:
            medPrice = 70.0; // Blood Thinner
        break;
        default:
            cout << "Invalid medication type!" << endl;
        break;
    }
}

// Apply the total medication cost (price * quantity) to the account
void Pharmacy::prescribeMedication(Account &account) {
    double totalMedicationCost = medPrice * medNum;
    account.addCharges(totalMedicationCost);
    cout << "Medication prescribed: " << medNum << " units of medication type " << medType
         << " with total cost: $" << totalMedicationCost << endl;
}
