#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	srand (time(NULL));
	//dwuwymairowa tablica
	const int r1=6, r2=6;
	int tab1[r1][r2];//30 elementów
	tab1[0][0]=10;
	tab1[0][1]=11;
	
	tab1[0][5]=12;
	
	tab1[4][5]=12;
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<r2;j++)
		{
			tab1[i][j]=rand()%100;
			cout<<tab1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"elementy na przekatnej"<<endl;
	for(int i=0;i<r1;++i)
	{
		cout<<tab1[i][i]<<"\t";
	}
	//maksymalny element
	int max=tab1[0][0];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<r2;j++)
		{
			if(max<tab1[i][j]) max = tab1[i][j];			
		}
	}
	cout<<"max "<<max;
	
	
	
}
