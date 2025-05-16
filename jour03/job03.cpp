#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string a;
    string b;


    cout << "Entrez une chaine de caracteres : ";
    cin >> a;    
    cout << "Entrez une autre chaine de caracteres : ";
    cin >> b;

    if (a == b) {
        cout << "Les deux chaines sont les memes";
        return 0;
    }
    else if (a != b) {
        cout << "Les deux chaines ne sont pas les memes";
        return 1;
    }
}