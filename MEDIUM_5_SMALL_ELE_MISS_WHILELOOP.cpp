#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = -1;
    int i = 0;

    while (i < n && arr[i] == i) {
        i++;
    }

    if (i < n) {
        missing = i;
    }

    if (missing != -1) {
        cout << "The smallest missing element is: " << missing << endl;
    } else {
        cout << "No element is missing." << endl;
    }

    return 0;
}

