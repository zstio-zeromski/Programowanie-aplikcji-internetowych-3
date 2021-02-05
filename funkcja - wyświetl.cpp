#include <iostream>
using namespace std;

void wyswietl(int n, int b)
{
	int iloczyn=1;
	int liczba;
	if(b!=0)
	{
		for(int i=0;i<n;i++)
		{
			cout<<"podaj liczbe"<<endl;
			cin>>liczba;
			iloczyn = iloczyn * liczba;
		}
		int wynik = iloczyn /b;
		
		cout<<wynik<<endl;	
	}
}

int main()
{
	wyswietl(3,10);
	return 0;
}
