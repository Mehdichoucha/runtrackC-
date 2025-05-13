#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Choose a number : ";
    cin >> i;
    if (i % 2 == 0) {
        cout << "It's even";
    } else {
        cout << "It's odd";
    }
    return 0;
}
