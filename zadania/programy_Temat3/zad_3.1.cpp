#include <iostream>
using namespace std;
int main(){
	cout<< "dostepne operacje (+,-,*,/)";
	cout<< "\npodaj wybrana operacje: ";
	
	char znak;
	cin >> znak;
	
	if(znak == '+' || znak == '-' || znak == '*' || znak == '/'){
		
		cout<< "\npodaj pierwsza liczbe (max 6 znakow po kropce): ";
		float a;
		cin >> a;
	
		cout<< "\npodaj druga liczbe (max 6 znakow po kropce): ";
		float b;
		cin >> b;
		
		switch(znak){
			case '+':
				cout << "\nwynik: " << a+b;
				break;
		
			case '-':
				cout << "\nwynik: " << a-b;
				break;
		
			case '*':
				cout << "\nwynik: " << a*b;
				break;
	
			case '/':
				cout << "\nwynik: " << a/b;	
				break;
			
			default:
				cout << "blod, zly znak!";
				break;
		}
	}
	else cout << "blod, zly znak";
}


	