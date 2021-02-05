#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream s1("dane.txt", ios::app);
	string data, imie;
	int ile;

	cout<<"podaj ilosc imienin"<<endl;
	cin>>ile;
	
	for(int i=0;i<ile; ++i)
	{	
		cout<<"Podaj date w postaci dd.mm"<<endl;
		cin>>data;
		
	    cout<<"Podaj imie"<<endl;
	    cin>>imie;
   
   		//zapis do pliku
    	s1<<data<<" "<<imie<<endl;
	}
    s1.close();	
    
    	
	//wyszukiwanie imienin po dacie
	string szukanadata;
	cout<<"Podaj szukana date"<<endl;
	cin>>szukanadata;
	
	ifstream s2("dane.txt");
	cout<<"imieniny obchodza: "<<endl;
	while(!s2.eof())
	{
		s2>>data;
		s2>>imie;
		
		//gdy linia jest pusta
		if(s2.eof()) break;
		
		if(data==szukanadata)
		{
			cout<<imie<<"\t";	
		}	
	}		
	s2.close();
	return 0;
}
