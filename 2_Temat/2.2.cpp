#include <iostream>
using namespace std;
int main(){
	float masa;
	float wzrost;
	string opis;
	cout << "Podaj wage (w kg): ";
	cin >> masa;
	cout << "Podaj wzrost (w m): ";
	cin >> wzrost;
	float bmi = masa / (wzrost * wzrost);    
	cout << "Twoje bmi wynosi: " << bmi << endl;
	if (bmi <= 18.5){
		opis = "Niedowaga";
	}
	else if ((bmi >= 18.5) && (bmi <= 24.9)){
		opis = "W normie";
	}
	else if ((bmi >= 25) && (bmi <= 29.9)) {
	}
	else if (bmi >= 30) {
		opis = "Otylosc";
	}
	else {
		cout << "Nieprawidlowa wartosc";
		return 0;
	}
	cout << "Twoj stan wagowy: " << opis;
	return 0;
}
