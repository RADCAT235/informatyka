#include <iostream>
using namespace std;
int main(){
	
	cout<<"podaj wymiar x tabicy: ";
	int x;
	cin >> x;
	
	cout<<"podaj wymiar y tabicy: ";
	int y;
	cin >> y;
	
	int liczby[x][y];
	int trans[y][x];
	
	cout <<"\npodaj liczby calkowite dla macierzy "<<x<<":"<<y<<endl<<endl;
	for (int i = 0; i < x; i++) {
		for(int j=0;j <y; j++){
			cout << "Podaj liczbe o koordynatach: "<<i+1<<":"<<j+1<<" : ";
			cin >> liczby[i][j];
		}
	}
	
	for (int i = 0; i < x; i++){
		for(int j=0;j <y; j++){
			trans[j][i]=liczby[i][j];
		}
	}
	
	cout << "\nTransponowana macierz:\n";
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}
			
	
	
