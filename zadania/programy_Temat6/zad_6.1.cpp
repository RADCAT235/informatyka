#include <iostream>
using namespace std;
int main(){
	
	int tablica[5];
	
	cout << "Podaj 5 liczb calkowitych:\n";
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tablica[i];
	}
	
	int suma = 0;

	for (int i = 0; i < 5; i++){
		suma += tablica[i];
	}
	
	cout << "\nsrednia wynosi: " << suma/5 << endl;


}