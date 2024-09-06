#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string name;
    int units;
    double charges;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setUnits(int u) {
        units = u;
    }

    int getUnits() {
        return units;
    }

    double getCharges() {
        return charges;
    }

    void calculateCharges() {
        if (units <= 100) {
            charges = units * 0.60;
        } else if (units <= 300) {
            charges = 100 * 0.60 + (units - 100) * 0.80;
        } else {
            charges = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
        }

        if (charges < 50) {
            charges = 50;
        } else if (charges > 300) {
            charges += charges * 0.15;
        }
    }
};

int main() {
    int numUsers;
    cout << "Enter the number of users: ";
    cin >> numUsers;

    User users[numUsers];
    for (int i = 0; i < numUsers; ++i) {
        string name;
        int units;
        cout << "Enter name of user " << i + 1 << ": ";
        cin >> name;
        cout << "Enter number of units consumed by " << name << ": ";
        cin >> units;
        users[i].setName(name);
        users[i].setUnits(units);
        users[i].calculateCharges();
    }

    for (int i = 0; i < numUsers; ++i) {
        cout << "Name: " << users[i].getName() << ", Units: " << users[i].getUnits() << ", Charges: Rs " << users[i].getCharges() << endl;
    }

    return 0;
}
