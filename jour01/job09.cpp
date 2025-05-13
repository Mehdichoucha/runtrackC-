#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Choose first number : ";
    cin >> a;
    cout << "Choose second number : ";
    cin >> b;
    cout << "Choose third number : ";
    cin >> c;

    if ((a > b && b > c) || (a > c && c > b)) {
        cout << a << " is the biggest";
    }
    else if ((b > a && a > c) || (b > c && c > a)) {
        cout << b << " is the biggest";
    }
    else if ((c > b && b > a) || (c > a && a > b)) {
        cout << c << " is the biggest";
    }
    return 0;
}
