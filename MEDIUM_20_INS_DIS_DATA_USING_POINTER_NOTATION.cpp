#include <iostream>
using namespace std;

int main() {
    float arr[4];
    float *ptr;

    cout << "Enter the 4 numbers: " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> *(arr + i);
    }

    cout << "Displaying the data: " << endl;
    for (int i = 0; i < 4; i++) {
        ptr = &arr[i];
        cout << *ptr << endl;
    }

    return 0;
}

