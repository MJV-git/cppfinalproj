#include <iostream>
#include <vector>
#include <string>
#include "Account.h"
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

using namespace std;

int main() {
    string name;
    int length;
    char isOperated;
    char addAnotherSurgery;
    int surgeryType;
    char prescribeMedication;
    int medType, medNum;

    cout << "--- Jersey Shore General Hospital ---" << endl;

    // Get patient details
    cout << "Please enter the patient's name: " << endl;
    cin >> name;
    PatientAccount patient1(name);

    cout << "Please enter the length of stay (in days): " << endl;
    cin >> length;
    patient1.setStayLength(length);

    cout << "Please enter the daily rate for the hospital room: \n$";
    double dailyRate;
    cin >> dailyRate;
    patient1.setDailyRate(dailyRate);

    // Vector to store multiple surgeries
    vector<Surgery> surgeries;

    // Surgery details
    cout << "Did the patient have surgery? (y/n): ";
    cin >> isOperated;
    if (tolower(isOperated) == 'y') {
        do {
            cout << "--- Surgery List ---" << endl;
            cout << "1. Maxillofacial Reconstruction\n2. Gastric Balloon\n3. Rhinoplasty\n4. Alveoplasty\n5. Rhytidectomy" << endl;
            cout << "Please enter a number corresponding to a surgery type from the list: ";
            cin >> surgeryType;

            // Create Surgery object and apply charges
            Surgery surgery(surgeryType);
            surgery.applyChargeToAccount(patient1);
            surgeries.push_back(surgery);

            cout << "Surgery performed: " << surgery.getSurgeryName() << endl;

            // Check if the user wants to add another surgery
            cout << "Do you want to add another surgery? (y/n): ";
            cin >> addAnotherSurgery;
        } while (tolower(addAnotherSurgery) == 'y');
    }

    // Prescription details
    cout << "Do you want to prescribe medication? (y/n): ";
    cin >> prescribeMedication;
    if (tolower(prescribeMedication) == 'y') {
        do {
            cout << "--- Medication List ---" << endl;
            cout << "1. Antibiotics ($20)\n2. Painkillers ($50)\n3. Antifungal ($100)\n4. Antihistamine ($30)\n5. Blood Thinner ($70)" << endl;
            cout << "Please enter the medication type number (1-5): ";
            cin >> medType;

            cout << "Enter the number of units to prescribe: ";
            cin >> medNum;

            // Create Pharmacy object and apply charges
            Pharmacy pharmacy(medType, medNum);
            pharmacy.prescribeMedication(patient1);

            // Check if the user wants to add more medication
            cout << "Do you want to prescribe another medication? (y/n): ";
            cin >> prescribeMedication;
        } while (tolower(prescribeMedication) == 'y');
    }

    // Display final charges
    double totalCost = patient1.calculateTotal() + patient1.getTotalCharges();
    cout << "\n--- Patient Checkout ---" << endl;
    cout << "Patient Name: " << name << endl;
    cout << "Length of Stay: " << length << " days" << endl;
    cout << "Daily Rate: $" << dailyRate << endl;
    cout << "Total Cost of Stay: $" << patient1.calculateTotal() << endl;

    // Display surgery details
    cout << "Surgeries Performed:" << endl;
    for (const auto &surgery : surgeries) {
        cout << "- " << surgery.getSurgeryName() << " ($" << surgery.surgeryPrice << ")" << endl;
    }

    cout << "Total Charges (including surgery and medication): $" << totalCost << endl;

    return 0;
}
