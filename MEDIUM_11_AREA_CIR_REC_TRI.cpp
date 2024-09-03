#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    Shape(double radius) {  
        cout << "Area of Circle: " << 3.1416 * radius * radius << endl;
    }

    Shape(double length, double breadth) {  
        cout << "Area of Rectangle: " << length * breadth << endl;
    }

    Shape(double base, double height, int triangleFlag) {  
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape circle(3); 
    Shape rectangle(6, 7); 
    Shape triangle(2, 3, 0); 
    return 0;
}

