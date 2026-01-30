#include <iostream>
using namespace std;
int main(){
	
	cout << "podaj ilosc liczb: ";
	int N;
	cin >> N;
	
	int liczby[N];
	int suma =0;
	
	cout <<"\npodaj "<<N<<" liczb calkowitych"<<endl<<endl;
	for (int i = 0; i < N; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> liczby[i];
		if(liczby[i]%2==0)suma += liczby[i];
	}
	
	cout<<"\nsuma liczb parzystych: "<<suma;
}