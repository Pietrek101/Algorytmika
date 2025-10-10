#include <iostream>
using namespace std;

int szukanie(int tab[], int tab_dlug, int szukana){
	int l = 0;
	int p = tab_dlug - 1;
	int sr;
	
	while (l <= p){
		
		sr = (l + p) / 2;
		
		if (tab[sr] == szukana){
			return sr;
		}
		
		else if (tab[sr] > szukana){
			p = sr - 1;
		}
		
		else{
			l = sr + 1;
		}
	}
	return -1;
}

int main(){
	int tab[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int tab_dlug = sizeof(tab) / sizeof(tab[0]);
	int szukana;
	cout << "Podaj lizcbe ktora chcesz znalezc: " << endl;
	cin >> szukana;
	int wynik = szukanie(tab, tab_dlug, szukana);
	if (wynik != -1){
		cout << "Liczba " << szukana << " znaduje sie w zbiorze w komorce o indeksie " << wynik << endl;
	}
	else {
		cout << "Liczba " << szukana << " nie znajduje sie w zbiorze." << endl;
	}
}
// Pryncypa�ki sigma
