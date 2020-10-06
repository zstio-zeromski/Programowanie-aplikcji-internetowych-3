/*
Program sprawdza, czy podana z klawiatury liczba
jest liczb¹ z przedia³u domknietego od 1 do 6
*/
#include <iostream>
using namespace std;

int main() 
{
  cout <<"Podaj a"<<endl;
  int a;
  cin>>a;
  if((a>=1) && (a<=6))
  {
  	cout<<"Poprawna ocena"<<endl;
  }
  else
  {
  	cout<<"Niepoprawna ocena"<<endl;
  }
  
  return 0;
}
