/*
Program pobieraj�cy z klawiatury dwie liczby ca�kowite
i wy�wietlaj�cy sum�, r�nic�, iloraz, iloczyn i reszt� z dzielenia
podanych liczb
*/
#include <iostream>

using namespace std;

int main()
{
	int a,b;
	//pobiereanie danych
	cout<<"Podaje warto�c liczbow� zmiennej a i b"<<endl;
	cin>>a>>b;
	
	//wyznaczanie sumy
	int suma=0;
	suma = a + b;
	
	cout<<"Suma "<<a<<"+"<<b<<" wynosi: "<<suma<<endl;
	cout<<"Roznica wynosi: "<<(a-b)<<endl;
	cout<<"Iloraz wynosi: "<<(a/b)<<endl;
	cout<<"Iloczyn wynosi: "<<(a*b)<<endl;
	cout<<"Reszta z dzielenia wynosi: "<<(a%b)<<endl;
	return 0;
	
}

