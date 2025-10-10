#include <iostream>
using namespace std;

long long potegowanie(long long a, long long n) {
    long long wynik = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            wynik = wynik * a;
        }
        a = a * a;
        n = n / 2;
    }
    return wynik;
}

int main() {
    long long a, n;
    
    cout << "Podaj liczbe (baza): ";
    cin >> a;
    cout << "Podaj potege (wykladnik): ";
    cin >> n;

    long long wynik = potegowanie(a, n);
    cout << a << " do potegi " << n << " wynosi: " << wynik << endl;

    return 0;
}
