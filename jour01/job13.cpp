#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    cout << "Choose a number above 5 : ";
    cin >> N;
    if (N < 5) {
        cout << "The choosen number have to be above 5";
        return 1;
    }
    for (int i = 5; i <= N; i++) {
        sum += i * i * i;
    }
    cout << "The sum of the cubes from 5^3 to " << N << "^3 is : " << sum;
    return 0;
}
