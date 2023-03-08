#include <iostream>
#include <cstdlib>

using namespace std;

int nr_miesiaca;
int  nr_roku_urodzenia;
int nr_dnia_urodzenia;

int main() {
    cout << "podaj dzien urodzenia";
    if (!(cin >> nr_dnia_urodzenia)) {
        cout << "To nie jest liczba!";
        exit(0);
    }
    cout << "Podaj numer miesiaca urodzenia: ";

    if (!(cin >> nr_miesiaca)) {
        cout << "To nie jest liczba!";
        exit(0);
    }
    cout << "Podaj rok: ";
    cin >> nr_roku_urodzenia;
    switch (nr_miesiaca) {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Ten miesiac ma 31 dni!";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Ten miesiac ma 30 dni!";
            break;

        case 2: {


            if (((nr_roku_urodzenia % 4 == 0) && (nr_roku_urodzenia % 100 != 0)) || (nr_roku_urodzenia % 400 == 0))
                cout << "Ten miesiac ma 29 dni!";
            else cout << "Ten miesiac ma 28 dni!";

        }
            break;

        default:
            cout << "Niepoprawny numer miesiaca!";

    }
    if (((nr_roku_urodzenia % 4 == 0) && (nr_roku_urodzenia % 100 != 0)) || (nr_roku_urodzenia % 400 == 0)) {
        cout << "\n  rok: " << nr_roku_urodzenia << " jest przestepny ma 366 dni";
    } else {
        cout << "\n  rok: " << nr_roku_urodzenia << " nie jest przestepny ma 365 dni ";
    }
    switch (nr_dnia_urodzenia) {
        case 1:
            cout << "\n poniadzialek"<<endl;
            if (nr_dnia_urodzenia % 2 == 0) {
                cout << "ten dzien jest parzysty";
            } else {
                cout << "ten dzień nie jest parzysty";
            }
            break;
        case 2:

            cout << "\n wtorek"<<endl;
            if (nr_dnia_urodzenia % 2 == 0) {
                cout << "ten dzien jest parzysty";
            } else {
                cout << "ten dzień nie jest parzysty";
            }
            break;
        case 3:
            cout << "\n sroda"<<endl;
            if (nr_dnia_urodzenia % 2 == 0) {
                cout << "ten dzien jest parzysty";
            } else {
                cout << "ten dzień nie jest parzysty";
            }
            break;
        case 4:
            cout << "\n czwartek"<<endl;
            if (nr_dnia_urodzenia % 2 == 0) {
                cout << "ten dzien jest parzysty";
            } else {
                cout << "ten dzień nie jest parzysty";
            }
            break;
        case 5:
            cout << "\n piatek"<<endl;
            if (nr_dnia_urodzenia % 2 == 0) {
                cout << "ten dzien jest parzysty";
            } else {
                cout << "ten dzień nie jest parzysty";
            }
            break;
        case 6:
            cout << "\nsobota"<<endl;
            if (nr_dnia_urodzenia % 2 == 0) {
                cout << "ten dzien jest parzysty";
            } else {
                cout << "ten dzień nie jest parzysty";
            }
            break;
        case 7:
            cout << "\nniedziela"<<endl;
            if (nr_dnia_urodzenia % 2 == 0) {
                cout << "ten dzien jest parzysty";
            } else {
                cout << "ten dzień nie jest parzysty";
            }
            break;



    }
    return 0;
}