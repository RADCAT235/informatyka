#include <iostream>
using namespace std;
int main(){
	
	char tekst[21];
	cout << "Podaj ciag znakow (max 20): ";
	cin.getline(tekst, 21);
	
	for (int i = 0; i < 20; i++) {
    	if (tekst[i]=='A') tekst[i]='O';
		if (tekst[i]=='a') tekst[i]='o';
    }
    cout << "zmodyfikowany ciag: " << tekst << endl;
}