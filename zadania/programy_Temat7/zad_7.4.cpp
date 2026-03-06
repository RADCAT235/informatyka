#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char tekst[100];
	cout << "Podaj ciag znakow: ";
	cin.getline(tekst, 100);
	
	int dlugosc = strlen(tekst);
	string tekstod;
	
	for (int i = 0; i < dlugosc; i++){
		tekstod[i] = tekst[dlugosc-i-1];
	}
	
	for (int i=0;i < dlugosc; i++) 
		cout << tekstod[i];
	
	
}