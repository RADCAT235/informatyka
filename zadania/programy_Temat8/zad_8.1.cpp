#include <iostream>
using namespace std;

bool sprparzystosci(int a){
	return(a%2 == 0);


}
int main(){
	int liczba;
	cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    
    if(sprparzystosci(liczba)){
        cout << "Liczba " << liczba << " jest parzysta.";
    } 
    else{
        cout << "Liczba " << liczba << " jest nieparzysta.";
    }
}