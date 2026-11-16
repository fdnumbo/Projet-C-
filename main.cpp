#include <iostream>

using namespace std;

int main()
{
    cout << "============ Herzlich Wilkommen zum Flächenberechner ==============" << '\n';
    cout << "Von welcher geometrischen Figur soll die Fläche berechnet werden? " << '\n';

    char auswahl;
    do
    {
        cout << " k) Kreis" << '\n';
        cout << " r) Rechteck" << '\n';
        cout << " d) Dreieck" << '\n';
        cout << " q) Beenden" << '\n';
        cin >> auswahl;
        if (auswahl == 'k' || auswahl == 'r' || auswahl == 'd')
        {
            cout << " Wird noch implementiert..." << '\n';
        }
    } while ( auswahl != 'q');


    return 0;
}