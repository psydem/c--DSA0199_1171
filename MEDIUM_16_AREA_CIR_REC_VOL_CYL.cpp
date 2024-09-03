#include <iostream>
#include <cmath>
using namespace std;

class Circle {
protected:
    double radius;
public:
    void getRadius() {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    double areaCircle() {
        return 3.1416 * radius * radius;
    }
};

class Rectangle : public Circle {
protected:
    double length, breadth;
public:
    void getDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }

    double areaRectangle() {
        return length * breadth;
    }
};

class Cylinder : public Rectangle {
protected:
    double height;
public:
    void getHeight() {
        cout << "Enter the height: ";
        cin >> height;
    }

    double volumeCylinder() {
        return 3.1416 * radius * radius * height;
    }
};

int main() {
    Cylinder obj;

    cout << "Getting the radius of the circle" << endl;
    obj.getRadius();
    cout << "The area = " << obj.areaCircle() << endl;

    cout << "\nGetting the length and breadth of the rectangle" << endl;
    obj.getDimensions();
    cout << "The area = " << obj.areaRectangle() << endl;

    cout << "\nGetting the height and radius of the cylinder" << endl;
    obj.getRadius();
    obj.getHeight();
    cout << "The volume of the cylinder is: " << obj.volumeCylinder() << endl;

    return 0;
}

