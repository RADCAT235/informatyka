#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj liczbe wierszy: ";
	int N ;
	cin >> N;
	
	int liczba = 1;
	
	for (int i = 1; i <= N; i++) {
    	for (int j = 1; j <=3 ; j++) {
        	cout << i <<"*"<<j <<"="<< i*j << endl; 
    	}
 		 cout << endl;
    }
}