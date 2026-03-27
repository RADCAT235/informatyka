#include <iostream>
using namespace std;

int CalculatePowerRecursive(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * CalculatePowerRecursive(base, exp - 1);
}

void DisplayResult(int result, int base, int exp) {
    cout << base << " do potegi " << exp << " wynosi: " << result << endl;
}

int main() {
    int base, exp;
    cout << "Podaj liczbe podstawowa: ";
    cin >> base;
    cout << "Podaj wykladnik: ";
    cin >> exp;

    int wynik = CalculatePowerRecursive(base, exp);
    DisplayResult(wynik, base, exp);
}