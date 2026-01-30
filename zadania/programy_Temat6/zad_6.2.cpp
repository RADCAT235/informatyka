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
		if(liczby[i]<0)liczby[i]=0;
	}
	
	cout<<"\npodane liczby (z zamiana liczb ujemnych na zera): ";
	for (int i = 0; i < N-1; i++) {cout <<liczby[i]<<", ";}
	cout << liczby[N-1];
}
