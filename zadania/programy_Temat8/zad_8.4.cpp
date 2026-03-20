#include <iostream>
using namespace std;

void GetArrayFromUser(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Podaj liczbe nr " << i+1 << ": ";
        cin >> arr[i];
    }
}

int FindMaxValue(int arr[], int size) {
    int max = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

void DisplayResult(int max) {
    cout << "Najwieksza liczba: " << max << endl;
}

int main() {
    cout << "podaj ilosc liczb: ";
    int size;
    cin >> size;
	int numbers[size];

    GetArrayFromUser(numbers, size);

    int max = FindMaxValue(numbers, size);

    DisplayResult(max);
}