// boucle while
#include <iostream>
using namespace std;

main()
{
    int i;
    i = 0;
    int n;
    int som;
    som = 0;
    while ( i < 4)
    {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i = i + 1;
    }
    cout << "Somme : " << som;
}

// boucle do while
#include <iostream>
using namespace std;

main()
{
    int i;
    i = 0;
    int n;
    int som;
    som = 0;
    do {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i = i + 1;
    }
    while ( i < 4);
    cout << "Somme totale : " << som;
}
