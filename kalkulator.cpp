/*
Program pobieraj¹cy z klawiatury dwie liczby ca³kowite
i wyœwietlaj¹cy sumê, ró¿nicê, iloraz, iloczyn i resztê z dzielenia
podanych liczb
*/
#include <iostream>

using namespace std;

int main()
{
	int a,b;
	//pobiereanie danych
	cout<<"Podaje wartoœc liczbow¹ zmiennej a i b"<<endl;
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

