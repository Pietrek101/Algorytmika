#include <iostream>
using namespace std;
void pierwsze(int n){
	int k = 2;
	while (n > 1){
		while(n % k == 0){
			cout << k << " ";
			n = n / k;
		}
		k++;
	}
}


int main(){
	int n;
	cout << "Podaj liczbê n: ";
	cin >> n;
	pierwsze(n);
}
