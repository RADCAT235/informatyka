#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int *tab, int size, int start, int end) {
    for(int i = 0; i < size; i++) {
        tab[i] = start + rand() % (end - start + 1);
    }
}

bool Sprawdz(int *liczba, int *tab, int size) {
    for(int i = 0; i < size; i++) {
        if(tab[i] == *liczba) return true;
    }
    return false;
}

int main() {
    srand(time(0));

    int size, start, end;

    cout << "Ile liczb: ";
    cin >> size;

    cout << "Wartosc poczatkowa: ";
    cin >> start;

    cout << "Wartosc koncowa: ";
    cin >> end;

    int *tab = new int[size];
    LosujTablice(tab, size, start, end);

    cout << "Tablica (Do debugingu/szybkiego sprawdzania): ";
    for(int i = 0; i < size; i++) cout << tab[i] << " ";

    int liczba, proby = 0;

    do {
        cout << "\nPodaj liczbe: ";
        cin >> liczba;
        proby++;

        if(Sprawdz(&liczba, tab, size))
            cout << "Zgadles!\n";
        else
            cout << "Nie zgadles\n";

    } while(!Sprawdz(&liczba, tab, size));

    cout << "Zgadles za " << proby << " razem.";

    delete[] tab;
}