#include <iostream>
using namespace std;
int main(){
	
	char tekst[21];
	cout << "Podaj ciag znakow (max 20): ";
	cin.getline(tekst, 21);
	cout << "Wprowadzono tekst: " << tekst << endl;
}