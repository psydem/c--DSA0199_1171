#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    double result = cbrt(num);
    cout << "The cube root of " << num << " is " << result << endl;

    return 0;
}

