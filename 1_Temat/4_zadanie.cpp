#include <iostream>
using namespace std;
int main(){
    string imie;
    short wiek;
    cout << "Podaj swoje imie: " ;
    cin >> imie;
    cout << "\nPodaj swoj wiek: " ;
    cin >> wiek;
    cout << "\nWitaj, " << imie << "! Masz " << wiek << " lat." ;
    return 0;
}