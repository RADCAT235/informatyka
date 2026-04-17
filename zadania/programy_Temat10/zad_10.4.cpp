#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int *tab, int size) {
    for(int i = 0; i < size; i++) {
        tab[i] = rand() % 51;
    }
}

bool SprawdzLiczbe(int *liczba, int *tab, int size) {
    for(int i = 0; i < size; i++) {
        if(tab[i] == *liczba) return true;
    }
    return false;
}

int main() {
    srand(time(0));

    int tab[10];
    LosujTablice(tab, 10);

    cout << "Tablica (Do debugingu/szybkiego sprawdzania): ";
    for(int i = 0; i < 10; i++) cout << tab[i] << " ";

    int liczba, proby = 0;

    do {
        cout << "\nPodaj liczbe: ";
        cin >> liczba;
        proby++;

        if(SprawdzLiczbe(&liczba, tab, 10))
            cout << "Zgadles!\n";
        else
            cout << "Nie zgadles\n";

    } while(!SprawdzLiczbe(&liczba, tab, 10));

    cout << "Zgadles za " << proby << " razem.";
}