#include <iostream>
using namespace std;
int main(){
	short a;
	short b;
	short suma;
	short roznica;
	short iloczyn;
	short iloraz;
	short r_dziel;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	suma = a + b;
	roznica = a - b;
	iloczyn = a * b;
	iloraz = a / b;
	r_dziel = a % b;
	cout << "Suma: " << suma << "\n";
	cout << "Roznica: " << roznica << "\n";
	cout << "Iloczyn: " << iloczyn << "\n";
	cout << "Iloraz: " << iloraz << "\n";
	cout << "Reszta z dzielenia: " << r_dziel << "\n";
    return 0;
}