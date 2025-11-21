#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj wysokosc: ";
	int w;
	cin >> w;
	cout << "Podaj szerokosc: ";
	int s;
	cin >> s;


	for (int i = 0; i < w; i++) {
 		for (int j = 0; j < s; j++) {
        	if (i == 0 || i == w - 1 || j==0 || j == s - 1){
        		cout <<"*";
			}
        	else{
        		cout << " ";
			}
		}
		cout << endl;
	}
}