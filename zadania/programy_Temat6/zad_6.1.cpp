#include <iostream>
using namespace std;
int main(){
	
	cout << "podaj ilosc liczb: ";
	int N;
	cin >> N;
	
	int tablica[N];
	int suma = 0;
	
	cout << "Podaj ">> N >>" liczb calkowitych:\n";
	
	for (int i = 0; i < N; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tablica[i];
		suma += tablica[i];
	}
	
	cout << "\nsrednia wynosi: " << suma/N << endl;


}