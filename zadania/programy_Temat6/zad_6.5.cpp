#include <iostream>
using namespace std;
int main(){
	
	cout<<"podaj wymiar x tabicy: ";
	int x;
	cin >> x;
	
	cout<<"podaj wymiar y tabicy: ";
	int y;
	cin >> y;
	
	int liczby[3][3];
	int sredna =0;
	
	cout <<"\npodaj9 liczb calkowitych dla macierzy 3x3"<<endl<<endl;
	for (int i = 0; i < 3; i++) {
		for(int j=0;j <3; j++){
			cout << "Podaj liczbe o koordynatach: "<<i+1<<":"<<j+1<<" : ";
			cin >> liczby[i][j];
			sredna += liczby[i][j];
		}
	}
	cout <<"sredna podanych liczb: "<<sredna/9;

}