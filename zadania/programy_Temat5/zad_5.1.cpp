#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj liczbe calkowita dodatnia: ";
	int N;
	cin >> N;
	
	int suma = 0;
	
	for(int licznik = 0 ; licznik <= N ; licznik++){
		
		suma = suma + licznik;
	}
	
	cout << "suma liczb od 1 do " << N << " wynosi: " << suma ;
		
}




