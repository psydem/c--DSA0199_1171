#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Square root of a negative number is not defined in real numbers." << endl;
    } else {
        double result = sqrt(num);
        cout << "The square root of " << num << " is " << result << endl;
    }

    return 0;
}

