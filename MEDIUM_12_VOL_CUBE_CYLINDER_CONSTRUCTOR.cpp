#include <iostream>
#include <cmath>
using namespace std;

class Volume {
public:
    Volume(double side) {  
        cout << "Volume of Cube: " << pow(side, 3) << endl;
    }

    Volume(double radius, double height) {  
        cout << "Volume of Cylinder: " << 3.1416 * radius * radius * height << endl;
    }
};

int main() {
    Volume cube(3); 
    Volume cylinder(3, 5); 
    return 0;
}

