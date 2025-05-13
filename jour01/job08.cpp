#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter a year : ";
    cin >> i;
    if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
        cout << "It's a leap year";
    } else {
        cout << "It's not a leap year";
    }
    return 0;
}
