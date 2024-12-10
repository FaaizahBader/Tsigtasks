#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;  // Read two numbers
    cout << "Input received: a = " << a << ", b = " << b << endl;

    cout << "Numbers before swapping: a = " << a << ", b = " << b << endl;

    // Swapping logic
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Numbers after swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
