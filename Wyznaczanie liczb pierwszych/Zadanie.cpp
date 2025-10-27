#include <iostream>
using namespace std;

int pierwsza(int liczba){
	for(int a = 2; a <= liczba - 1; a++){
		if(liczba % a == 0){
			return 1;
			break;
		}
	}
	
}
int main(){
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	int wynik = pierwsza(liczba);
	if (wynik == 0){
		cout << liczba << " jest liczba pierwsza." << endl;
	}
	else {
		cout << liczba << " nie jest liczba pierwsza." << endl;
	}
}