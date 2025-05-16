#include <iostream>
using namespace std;

int main() {
    const int TAILLE = 10;
    int i[TAILLE];
    int a = 0;

    cout << "Entrez 10 entiers :" << endl;
    for (int j = 0; j < TAILLE; ++j) {
        cout << "i[" << j << "] = ";
        cin >> i[j];
        if (i[j] >= 5) {
            a++;
        }
    }
    cout << "Nombre d'entiers superieur a 5 : " << a;
    return 0;
}
