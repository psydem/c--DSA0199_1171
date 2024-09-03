#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double basic, hra, da, gp, np;

    void getDetails() {
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basic;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
        gp = basic + hra + da;
        np = basic + hra; 
    }

    void displayDetails() {
        cout << name << "\t" << id << "\t" << basic << "\t" << hra << "\t" << da << "\t" << gp << "\t" << np << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee employees[n];
    for (int i = 0; i < n; i++) {
        employees[i].getDetails();
    }

    cout << "EMPLOYEE NAME\tID\tBASIC\tHRA\tDA\tGP\tNP" << endl;
    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }

    return 0;
}

