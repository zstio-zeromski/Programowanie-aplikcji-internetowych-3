/*
Program pobierajacy z klawiatury liczb� rzeczywist�,
sprawdza czy jest ona dodatnia, ujemna, czy r�wna zero
*/
#include <iostream>

using namespace std;

int main() 
{
  	cout <<"Podaj a"<<endl;
  	float a;
  	cin>>a;
  	if(a>0)
  	{
  		cout<<"Dodatnia"<<endl;
	}	
  	else
  	{
	  	if(a==0)
	  	{
	  		cout<<"Zero"<<endl;	
		}
		else
		{
			cout<<"Ujemna"<<endl;	
		}
  	}
  
  return 0;
}
