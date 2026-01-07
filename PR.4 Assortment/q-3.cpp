//Q-3 Transpose of 2D Array

#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Enter the Row and Column size:";
	cin>>n;
	
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	
}