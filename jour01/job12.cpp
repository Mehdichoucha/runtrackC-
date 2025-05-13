#include <iostream>
using namespace std;

int main() {
    int x;
    float sum = 0;
    cout << "Enter first note : ";
    cin >> x; sum += x;
    cout << "Enter second note : ";
    cin >> x; sum += x;
    cout << "Enter third note : ";
    cin >> x; sum += x;
    cout << "Enter fourth note : ";
    cin >> x; sum += x;
    cout << "Enter fifth note : ";
    cin >> x; sum += x;
    cout << "The average is: " << sum / 5;
    return 0;
}
