/*
Program sprawdza, czy podana z klawiatury liczba ca³kowita jest 
parzysta czy nieparzysta
*/
#include <iostream>
using namespace std;

int main() 
{
  cout <<"Podaj a"<<endl;
  int a;
  cin>>a;
  
  (a%2==0)?cout<<"Parzysta":cout<<"Nieparzysta";
  
  
  return 0;
}
