#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int TAILLE = 21;
    char tab[TAILLE];

    cout << "Entrez une chaine de caracteres ( max 20 ): ";
    cin.getline(tab, TAILLE);

    cout << "Tableau pour chaque caractere :" << "\n";
    for (int i = 0; tab[i] != '\0'; ++i) {
        cout << "Lettre numero " << i << " : " << tab[i] << "\n";
    }
    return 0;
}
