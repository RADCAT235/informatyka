#include <iostream>
using namespace std;
int main(){
	cout << "podaj wynik:\n";
	int punkty; 
    cin >> punkty;
    
    if (punkty == 100) cout << "ocena celujoca";
    else if (punkty >= 85 && punkty <= 99 )cout << "ocena bardzo dobra";
    else if (punkty >= 70 && punkty <= 84 )cout << "ocena dobra";
    else if (punkty >= 50 && punkty <= 69 )cout << "ocena dostateczna";
    else if (punkty >= 0 && punkty <= 49 )cout << "ocena niedosateczna";
    else cout << "blod, zakres od 0 do 100, wpisales: "<< punkty;
    
    return 0;
}
