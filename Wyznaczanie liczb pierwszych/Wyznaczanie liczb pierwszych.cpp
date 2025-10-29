#include <iostream>
using namespace std;

bool pierwsza(int liczba){
	if(liczba < 2){
		return false;
	}
	for(int a = 2; a < liczba; a++){
		if(liczba % a == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	int wynik = pierwsza(liczba);
	if (wynik == true){
		cout << liczba << " jest liczba pierwsza." << endl;
	}
	else {
		cout << liczba << " nie jest liczba pierwsza." << endl;
	}
	return 0;
}
