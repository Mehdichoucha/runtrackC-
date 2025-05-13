#include <iostream>
using namespace std;

int main() {
    float a;
    float b;
    cout << "Choose the price of a kilo of carrots : ";
    cin >> a;
    cout << "Choose the number of kilo of carrots : ";
    cin >> b;
    float i = a * b;
    float j = (i * 15) / 100;
    float k = i + j;
    cout << "The price of " << b << " kilo of carrots is " << k << " with TVA (15%)";
    return 0;
}
