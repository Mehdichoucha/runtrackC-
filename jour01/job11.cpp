#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int i;
    cout << "Enter the first number a : ";
    cin >> a;
    cout << "Enter the second number b : ";
    cin >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << "\n";
    i = a;
    a = b;
    b = i;
    cout << "After swapping: b = " << a << ", b = " << b << "\n";
    return 0;
}