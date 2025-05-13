#include <iostream>
using namespace std;

int main() {
    int number;
    int reversed = 0;
    cout << "Choose a number : ";
    cin >> number;
    while (number != 0) {
        int figure = number % 10;
        reversed = reversed * 10 + figure;
        number = number / 10;
    }
    cout << "The reverse number is : " << reversed;
    return 0;
}
