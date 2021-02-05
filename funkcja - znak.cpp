#include <iostream>
using namespace std;

char znak(char z='a')
{
	if(z!='z')
		return z;	
}

int main()
{
	char z='z';
	cout<<znak('b')<<" "<<znak()<<" "<<znak(z)<<endl;
	return 0;
}
