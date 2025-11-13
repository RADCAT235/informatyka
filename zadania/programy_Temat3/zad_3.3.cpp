#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj czas parkowania: ";
	float czas;
	cin >> czas;
	
	cout << "Podaj typ pojazdu (S - auto, M - motocykl, A - autobus): ";
	char typ;
	cin >> typ;
	
	switch (typ){
		
		case 's':
		case 'S':
			cout << "oplata: " << czas*5 << " zl";
			break;
		
		case 'm':	
		case 'M':
			cout << "oplata: " << czas*3 << " zl";
			break;
			
		case 'a':	
		case 'A':
			cout << "oplata: " << czas*10 << " zl";
			break;
		
		default:
			cout << "nieznany typ pojazdu";
			break;
	}
}
