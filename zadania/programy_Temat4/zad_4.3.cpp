#include <iostream>
using namespace std;
int main(){
	
	char wybor;
	int N;
	int licznik;
	
	do {
    	cout << "\nPodaj liczbe: ";
		cin >> N;
    	cout << "\nwproadziles:" << N;
    	
		cout << "\nCzy chcesz jeszcze raz? (T/N): ";
		cin >> wybor;
		
		licznik += 1;
		
	} while (wybor != 'N' );
	
	cout << "\nZakoncyles wprowadzanie liczb po:" << licznik << " razach";
	
	
}