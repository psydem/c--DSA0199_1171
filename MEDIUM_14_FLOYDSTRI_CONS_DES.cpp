#include <iostream>
using namespace std;

class FloydsTriangle {
public:
    FloydsTriangle(int n) {
        int num = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }

    ~FloydsTriangle() {
        cout << "Destructor is called!" << endl;
    }
};

int main() {
    FloydsTriangle ft(5); 
    return 0;
}

