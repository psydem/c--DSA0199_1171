#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num, i = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    do {
        cout << "Enter number: ";
        cin >> num;
        sum += num;
        i++;
    } while (i < n);

    cout << "Sum: " << sum << endl;

    return 0;
}

