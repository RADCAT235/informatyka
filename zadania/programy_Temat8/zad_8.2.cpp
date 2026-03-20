#include <iostream>
using namespace std;

double suma(double a, double b) { return a + b; }
double roznica(double a, double b) { return a - b; }
double iloczyn(double a, double b) { return a * b; }
double iloraz(double a, double b) {
	if (b == 0) {
        cout << "Blad: dzielenie przez zero\n";
        return 0;
    }
    return a / b;
}
int main() {
    int wybor;
    double a;
    double b;

    while (true) {
        cout << "Wybierz funkcje:\n";
        cout << "1.Suma\n2.Roznica\n3.Iloczyn\n4.Iloraz\n0.Wyjscie\n";
        cout << "\nWybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "\nKoniec programu.\n"<<endl;
            break;
        }
        if (wybor > 4){
        	cout << "\nBrak opcji.\n"<<endl;
        	continue;
		}

        cout << "\nPodaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        double wynik;

        switch (wybor) {
            case 1: wynik = suma(a, b); break;
            case 2: wynik = roznica(a, b); break;
            case 3: wynik = iloczyn(a, b); break;
            case 4: wynik = iloraz(a, b); break;
            default:
                cout << "Nieprawidlowy wybor\n";
                continue; 
        }
		
		cout << "Wynik: " << wynik << endl<<endl;
    }
}