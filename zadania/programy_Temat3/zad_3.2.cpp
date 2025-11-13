#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj temperature w stopniach censjusza: ";
	float temp;
	cin >> temp;
	
	cout << "Podaj jednostke docelowa (K - KELVIN,F - FARENHEIT): ";
	char jdoc;
	cin >> jdoc;
	
	switch (jdoc){
		
		case 'k':
		case 'K':
			cout << "temperatura w Kelvinach: " << temp + 273.15;
			break;
		
		case 'f':	
		case 'F':
			cout << "temperatura w farenheitach: " << (temp*9/5) + 32;
			break;
			
		default:
			cout << "blod, zly znak";
			break;
	}
}
