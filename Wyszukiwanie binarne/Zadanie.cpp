#include <iostream>
using namespace std;
int main(){
	int tab[20];
	for(int a = 1; a <= 20; a++){
		tab[a] = a;
	}
	int szukana = 0;
	int l = 0;
	int p = sizeof(tab) - 1;
	int sr = 0;
	cout << "Podaj liczbe ktora chcesz znalezc " << endl;
	cin >> szukana;
	while(l <= p){
		sr = (l+p)/2;
		if(tab[sr] == szukana){
			return 1;
			cout << "Liczba 29 wystepuje w zbiorze w komorce o indeksie: ";
			break;
		}
		if(tab[sr] <= szukana){
			l = sr + 1;
		}
		if(tab[sr] == szukana){
			l = sr - 1;
		}
	}
	
}