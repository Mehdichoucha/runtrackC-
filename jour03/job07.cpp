#include <iostream>
using namespace std;

int main() {
    const int TAILLE = 11;
    int T[TAILLE];

    cout << "Entrez 10 nombres entiers :" << "\n";
    for (int i = 1; i < TAILLE; ++i) {
        cout << "Nombre numero " << i << " : ";
        cin >> T[i];
    }

    int indiceMax = 0;
    for (int i = 1; i < TAILLE; ++i) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }

    cout << "Le plus grand nombre est : " << T[indiceMax] << " a la position : " << indiceMax;
    return 0;
}
