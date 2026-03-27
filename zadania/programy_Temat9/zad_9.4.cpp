#include <iostream>
using namespace std;

double CalculateVolume(double a) {
    return a * a * a;
}

double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

double CalculateVolume(double r, double h, bool isCylinder) {
    return 3.1415 * r * r * h;
}

void DisplayResult(double volume) {
    cout << "Objetosc wynosi: " << volume << endl;
}

int main() {
    int choice;
    cout << "Wybierz bryle:\n";
    cout << "1 - Szescian\n";
    cout << "2 - Prostopadloscian\n";
    cout << "3 - Walec\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            double a;
            cout << "Podaj bok: ";
            cin >> a;
            DisplayResult(CalculateVolume(a));
            break;
        }
        case 2: {
            double a, b, h;
            cout << "Podaj dlugosc, szerokosc, wysokosc: ";
            cin >> a >> b >> h;
            DisplayResult(CalculateVolume(a, b, h));
            break;
        }
        case 3: {
            double r, h;
            cout << "Podaj promien i wysokosc: ";
            cin >> r >> h;
            DisplayResult(CalculateVolume(r, h, true));
            break;
        }
        default:
            cout << "Nieprawidlowy wybor" << endl;
    }
}