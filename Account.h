#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

class Account{
    private:

    int id;

    public:

    double totalCharges;

    Account();

    void addCharges(double charge);

    void removeCharges(double charge);

    double getTotalCharges() const;

    int getId() const;




};






#endif //ACCOUNT_H
