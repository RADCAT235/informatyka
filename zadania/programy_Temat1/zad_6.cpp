#include <iostream>
using namespace std;
int main(){
    cout << "podaj pierwsza liczbe:\n";
	int a; 
    cin >> a;
    
    cout << "podaj druga liczbe:\n ";
	int b; 
    cin >> b ;
    
    int c = a+b;
    
	cout << "\nsuma:" << c ;
	
	
	if(c%2 == 0)cout << "\nliczba parzysta"; else cout << "\nliczba nieparzysta";
	
	return 0;
}