//Q-2 Largest Element in 2D Array

#include<iostream>
using namespace std;
main()
{
	int row,col,i,j,n=0;
	cout<<"Enter Row size In Array:";
	cin>>row;
	cout<<"Enter Column size in Array:";
	cin>>col;
	int a[row][col];
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
	}
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>n)
			{
				n=a[i][j];
			}
		}
	}
	cout<<"Largest Element is:"<<n;
}