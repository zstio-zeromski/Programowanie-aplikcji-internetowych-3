#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//pobranie danych z klawiatury do zmiennych
	string imie, nazwisko;
	
	cout<<"Podaje imie"<<endl;
	cin>>imie;
	
	cout<<"Podaj nazwisko"<<endl;
	cin>>nazwisko;
	
	//zapis imienia i nazwiska do pliku	
	ofstream s1("dane.txt");
	s1<<imie<<" "<<nazwisko;
	s1.close();
	
	//odczyt danych z pliku
	ifstream s2("dane.txt");
	s2>>imie;
	s2>>nazwisko;
		
	//komunikat powitalny
	cout<<"Witaj!"<<imie<<" "<<nazwisko<<endl;	
	
	return 0;
}
