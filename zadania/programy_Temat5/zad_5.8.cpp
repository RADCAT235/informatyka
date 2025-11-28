#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj wysokosc: ";
	int w;
	cin >> w;
	cout << "Podaj szerokosc: ";
	int s;
	cin >> s;
	
	int m =0;
	
	for (int i = 0; i < w; i++) {
 		for (int j = 0; j < s; j++) {
 			
			if (j < m || j >= s - m)
 				cout << " ";
 			
 			else
 				cout << "*";
 			
		}
		m++;
		cout << endl;
	}
	
}