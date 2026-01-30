#include <iostream>
using namespace std;
int main(){
	
	cout << "podaj ilosc liczb: ";
	int N;
	cin >> N;
	
	int liczby[N];
	
	cout <<"\npodaj "<<N<<" liczb calkowitych"<<endl<<endl;
	for (int i = 0; i < N; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> liczby[i];
	}
	
	int min = liczby[0];
	for (int i = 1; i < N; i++) {
		if(liczby[i]<min)min=liczby[i];
	}
	
	cout <<"najmniejsza liczba: "<<min;
}