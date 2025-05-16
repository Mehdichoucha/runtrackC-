#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {
    string texte = "vive la plateforme !";
    for (char& c : texte) {
        c = toupper(c); 
    }
    cout << texte;
    return 0;
}
