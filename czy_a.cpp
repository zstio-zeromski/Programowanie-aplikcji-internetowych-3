/*
Program sprawdzaj�cy czy podany z klawiatury znak
jest liczb� liter� 'a'
*/
#include <iostream>
using namespace std;

int main() 
{
  cout <<"Podaj a"<<endl;
  char a;
  cin>>a;
  
  (a=='a')?cout<<"jest a"<<endl:cout<<"nie jest a"<<endl;
  
  
  return 0;
}
