#include <iostream>
using namespace std;
int main(){
	
	string tekst;
	cout << "Podaj ciag znakow: ";
	getline(cin, tekst);
	
	char znak;
	cout << "Podaj znak do zliczenia: ";
	cin >> znak;
	
	int pozycje[tekst.length()];
	int licznik = 0;
	for (int i = 0; i < tekst.length(); i++){
		if (tekst[i]==znak){
			pozycje[licznik]= i;
			licznik += 1;		
		} 
	}
	cout << "Liczba wystapien znaku: "<<licznik<<endl;
	cout << "pozycje znaku: "; 
	for (int i = 0; i < licznik; i++){
		cout <<pozycje[i]<<", ";
	}
	}