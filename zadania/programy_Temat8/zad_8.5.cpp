#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void DuzaMala(int liczba, int wylosowana) {
    if(liczba < wylosowana)
        cout << "Za malo\n";
    else if(liczba > wylosowana)
        cout << "Za duzo\n";
}

bool CheckLiczba(int liczba, int wylosowana) {
    return liczba == wylosowana;
}

int main() {

    srand(time(NULL));
    int wylosowana = rand() % 100 + 1;
    int liczba;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        if(CheckLiczba(liczba, wylosowana)) {
            cout << "Gratulacje! Odgadles liczbe.\n";
            break;
        }

        DuzaMala(liczba, wylosowana);

    } while(true);
}