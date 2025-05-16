#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string phrase = "vive la plateforme !";
    string voyelles = "aeiouyAEIOUY";
    string resultat = "";

    for (char c : phrase) {
        if (voyelles.find(c) == string::npos) {
            resultat += c;
        }
    }

    cout << "Phrase sans voyelles : " << resultat;
    return 0;
}
