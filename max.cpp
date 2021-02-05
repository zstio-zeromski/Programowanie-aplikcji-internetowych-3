#include <iostream>

using namespace std;

double max1(double x, double y)
{
	if(x>y)
		return x;
	else
		return y;
}

void max2(double x, double y, double *z)
{
	if(x>y)
		*z = x;
	else
		*z = y;
}

void max3(double x, double y, double &z)
{
	if(x>y)
		z = x;
	else
		z = y;	
}

int main()
{
	double a=22;
	double b=12;
	double c=0;
	double d=0;
	
	max2(a,b,&c);
	
	cout<<"max "<<a<<" i "<<b<<" wynosi "<<c<<endl;
	
	cout<<"max "<<a<<" i "<<b<<" wynosi "<<max1(a,b)<<endl;
	
	max3(a,b,d);
	cout<<"max "<<a<<" i "<<b<<" wynosi "<<d<<endl;
	
	return 0;
}
