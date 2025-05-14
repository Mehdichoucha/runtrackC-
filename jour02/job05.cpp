#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Choissisez une note entre 0 et 20 : ";
    cin >> i;

    if ( (i < 0) || (i > 20) ) {
        cout << "Ne correspond aux critères";
    }

    else {
        if (i <= 10) {
            cout << "\nNon valide";
            }
        else if (i > 10) {
            cout << "\nValide";
            }
        return 0;
    }
}