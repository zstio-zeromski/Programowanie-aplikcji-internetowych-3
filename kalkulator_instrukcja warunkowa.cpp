/*
kalkulator z instrukcj¹ warunkow¹ 
zapobiega b³êdom wynikaj¹cym z dzielenia przez 0
*/

#include <iostream>

using namespace std;

int main()
{
	int a=0,b;//dwie zmienne typu ca³kowitego
	cout<<a<<" "<<b;
	int suma = 0;
	cout<<"Program - kalkulator!"<<endl;
	cout<<"Podaj pierwsza liczbe "<<endl;
	cin>>a;
	cout<<"Podaj druga liczbe "<<endl;
	cin>>b;
	
	suma = a + b;
	
	cout<<"Suma "<<a<<" + "<<b<<" wynosi: "<<suma<<endl;
	cout<<"Roznica wynosi: "<<(a-b)<<endl;
	cout<<"Iloczyn wynosi: "<<(a*b)<<endl;
	if(b==0)
	{
		cout<<"nie dziel przez zero!"<<endl;
	}
	else
	{
		cout<<"Iloraz wynosi: "<<(a/b)<<endl;
		cout<<"Reszta z dzielenia wynosi: "<<(a%b)<<endl;
	}
	
return 0;
	
}

