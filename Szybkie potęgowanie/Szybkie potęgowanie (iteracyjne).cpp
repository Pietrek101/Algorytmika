#include <iostream>
using namespace std;

int potega(int a, int n){
	int wynik = 1;
	while (n > 0){
		if (n % 2 == 1){
			wynik = wynik * a;
		}
		
		a = a * a;
		n = n / 2;
	}
	return wynik;
}

int main(){
	int a;
	int n;
	cout << "Podaj baze (a): ";
	cin >> a;
	cout << "Podaj wykladnik (n): ";
	cin >> n;
	int wynik = potega(a, n);
	cout << a << "do potegi " << n << " wynosi: " << wynik << endl;
}
// Pryncypa³ki
