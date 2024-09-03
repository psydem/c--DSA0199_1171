#include <iostream>
using namespace std;

class DecimalToBinary {
public:
    DecimalToBinary(int n) {
        cout << "Binary equivalent of " << n << " is: ";
        convertToBinary(n);
        cout << endl;
    }

private:
    void convertToBinary(int n) {
        if (n == 0) return;
        convertToBinary(n / 2);
        cout << n % 2;
    }
};

int main() {
    DecimalToBinary binary(10); 
    DecimalToBinary binary2(5); 
    return 0;
}

