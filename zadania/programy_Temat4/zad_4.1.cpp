#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj liczbe N: ";
	int N;
	cin >> N;
	
	int suma = 2;
	
	cout << "Liczby parzyste od 2 do N" << endl;
	
	while (suma <= N){
		cout << suma << endl;
		suma += 2;
	}

}