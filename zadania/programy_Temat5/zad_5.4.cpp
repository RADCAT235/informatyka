#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj liczbe wierszy: ";
	int w ;
	cin >> w;
	
	cout << "Podaj liczbe kolumn: ";
	int k ;
	cin >> k;
	
	int liczba = 1;
	
	for (int i = 1; i <= w; i++) {
    	for (int j = 1; j <= k; j++) {
        cout << liczba << "\t";
		liczba += 2; 
   		}
   	cout << endl;
   	}
}

	

