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
	string liczba;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	suma = a + b;
	if(suma%2==0)
     liczba = "parzysta";
    else
     liczba = "nieparzysta";
    cout << "Suma: " << suma << "\n";
	cout << "Suma jest liczba : " << liczba << "\n";
	
    return 0;
}