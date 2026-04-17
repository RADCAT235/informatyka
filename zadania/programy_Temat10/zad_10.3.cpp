#include <iostream>
using namespace std;

int ObliczSume(int *tab, int size) {
    int suma = 0;
    for(int i = 0; i < size; i++) {
        suma += tab[i];
    }
    return suma;
}

int main() {
    int tab[4] = {5, 10, 15, 20};

    cout << "Suma elementow tablicy: " << ObliczSume(tab, 4) << endl;

    for(int i = 0; i < 4; i++) {
        cout << "Podaj nowa wartosc dla elementu " << i+1 << ": ";
        cin >> tab[i];
    }

    cout << "Nowa tablica:\n";
    for(int i = 0; i < 4; i++) {
        cout << tab[i] << " ";
    }

    cout << "\nNowa suma: " << ObliczSume(tab, 4);
}
