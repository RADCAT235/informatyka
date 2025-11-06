#include <iostream>
using namespace std;
int main(){
	cout << "podaj liczbe calkowita: ";
	int a;
	cin >> a;
	
	if(a%2 == 0)cout << "liczba parzysta";
	else cout << "liczba nieparzysta";
	
	if(a%3 == 0)cout << "\nliczba podzalna przez 3";
	else cout << "\nliczba niepodzelna przez 3";
}
