#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> num;
        sum += num;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}

