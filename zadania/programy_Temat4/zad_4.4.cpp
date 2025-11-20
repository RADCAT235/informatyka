#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj liczbe calkowita dodatnia: ";
	int N;
	cin >> N;
	
	int wynik = 0;
	int licznik = -1;
	int qwe;
 	
	do{
		
		wynik += 2;
		licznik += 1;
		cout << wynik <<endl;
		cout<< licznik <<endl;	
		
	} while(wynik <= N || (wynik + 1) == N);
	
	cout << "\n liczba liczb parzystych od 1 do " << N << " wynosi: " << licznik;

}