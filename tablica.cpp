#include <iostream>

using namespace std;

int main()
{
	const int rozmiar=10;
	char t1[rozmiar];
	t1[0]='a';
	t1[1]='b';
	t1[2]='c';
	t1[0]='d';
	
	
	t1[9]='e';
	
	for(int i=0;i<10;i++)
	{
		cout<<i<<"\t"<<t1[i]<<endl;
	}	
	
	
	return 0;
}
