
#include<iostream>
using namespace std;

main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(k=5;k>i;k--)
		{
			cout<<"  ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j;
		}

		cout<<endl;
	}
	
}

/*
output:
1        1
12      21
123    321
1234  4321
1234554321
*/