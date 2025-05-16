#include <iostream>
#include <string>
using namespace std;

int main() {
    string i;
    cout << "Entrez une chaine de caracteres : ";
    getline(cin, i);
    cout << "La longueur de la chaine est de : " << i.length();
    return 0;
}
