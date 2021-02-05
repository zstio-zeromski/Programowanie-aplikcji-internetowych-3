#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ofstream s1("plik.txt");
	s1<<"tekst do pliku\n tekst do pliku 2";
	s1.close();
	
	ifstream s2("plik.txt");
	string tekst;
	while(!s2.eof())
	{
		//s2>>tekst;
		getline(s2,tekst);
		cout<<tekst<<endl;	
	}
	return 0;
}
