#include <iostream>
using namespace std;
int main(){
	short punkty;
	string ocena;
	cout << "Podaj wynik egzaminu (liczba punktow): ";
	cin >> punkty;
	if ((punkty >= 0) && (punkty <= 49)) {
		ocena = "niedostateczna";
	}
	else if ((punkty >= 50) && (punkty <= 69)) {
		ocena = "dostateczna";
	}
	else if ((punkty >= 70) && (punkty <= 84)) {
		ocena = "dobra";
	}
	else if ((punkty >= 85) && (punkty <= 99)) {
		ocena = "bardzo dobra";
	}
	else if (punkty == 100) {
		ocena = "celujaca";
	}
	else {
		cout << "Nieprawidłowa wartość";
		return 0;
	}
	cout << "Ocena: " << ocena;
	return 0;
}
