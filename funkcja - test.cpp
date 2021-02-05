#include <iostream>
using namespace std;

char test(float a)
{
	if(a==0)
	{
		return 'c';
	}
	else
	{
		if(a>10)
		{
			return 'b';
		}
		else
		{
			return 'a';
		
		}
		
	}
}

int main()
{
	
	cout<<test(10.4)<<"\t"<<test(9.1)<<"\t"<<test(0)<<endl;
	return 0;	
}
