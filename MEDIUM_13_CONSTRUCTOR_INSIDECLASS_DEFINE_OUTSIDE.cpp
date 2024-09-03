#include <iostream>
using namespace std;

class Example {
public:
    Example(); 
    void display();
};
Example::Example() {
    cout << "Constructor is called!" << endl;
}

void Example::display() {
    cout << "Display function is called!" << endl;
}

int main() {
    Example obj; 
    obj.display();
    return 0;
}

