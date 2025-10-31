#include <iostream>
using namespace std;
int main(){
    cout << "podaj pierwsza liczbe:\n";
	int a; 
    cin >> a;
    
    cout << "podaj druga liczbe:\n ";
	int b; 
    cin >> b ;
    
    cout << "\nsuma:" << a+b ;
	cout << "\nroznica:" << a-b;
	cout << "\niloczyn:" << a*b;
	cout << "\n\niloraz:" << a/b;
	cout << "\nreszta:" <<a%b;;
	
    return 0;
}