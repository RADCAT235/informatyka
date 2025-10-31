#include <iostream>
using namespace std;
int main(){
    cout << "podaj imie:\n ";
	string imie; 
    cin >> imie;
    
    cout << "podaj wiek:\n ";
	int wiek; 
    cin >> imie ;
    
    cout << "witaj " << imie << " !" << " masz " << wiek << " lat.";
    
    return 0;
}