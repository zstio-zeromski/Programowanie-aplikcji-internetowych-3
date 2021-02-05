#include <iostream>
using namespace std;

void wyswietl(int b, int a=0)
{
	int i=a;
	if(a<b){
		while(i<=b)	
		{
			cout<<i<<"\t";
			i++;	
		}
	}
	else
	{
		while(i>=b)	
		{
			cout<<i<<"\t";
			i--;	
		}
		
	}
} 
  
int main()
{
 	
 	wyswietl(3);
 	cout<<endl;
 	wyswietl(5,10); 	
 	
 	return 0;
}
 
 
