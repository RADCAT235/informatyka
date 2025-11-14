#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj liczbe N: ";
	int N;
	cin >> N;
	
	int suma = 0;
	int licznik = 0;
	
	while (licznik <= N){
		
		suma = licznik + suma;
		licznik += 1;
	}
	
	cout << "Suma liczb naturalnych do " << N << " wynosi: " << suma;
}