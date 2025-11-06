#include <iostream>
using namespace std;
int main(){
	cout << "dane podaj w zaokragleniu do 1 miejsca po kropce (XX.X)";
	
	cout << "\npodaj wage w kg: ";
	float waga;
	cin >> waga;
	
	cout << "podaj wzrost w metrach: ";
	float wzrost;
	cin >> wzrost;
	
	float BMI = waga /(wzrost*wzrost);
	cout << "Twoje BMI to: " << BMI;
	cout << "\nStan: ";
	if(BMI < 18.5)cout << "niedowaga";
	else if(BMI >= 18.5 && BMI <= 24.9)cout << "w normie";
	else if(BMI >= 25 && BMI <= 29.9)cout << "nadwaga";
	else cout << "otylosc";
}