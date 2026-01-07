//Q-4 Sum of Row & Column of 2D Array

#include<iostream>
using namespace std;
main()
{
	int row,col,i,j,f_row,row_sum=0,col_sum=0,f_col;
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
	cout<<endl;
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Enter Row Number:";
	cin>>f_row;
	cout<<"Elements of row"<<f_row<<":";
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==f_row)
			{
				cout<<a[i][j]<<" ";
				row_sum+=a[i][j];
			}
		}
	}
	cout<<endl<<"sum of Row:"<<row_sum<<endl;
	cout<<"Enter Column Number:";
	cin>>f_col;
	cout<<"Elements of Column"<<f_col<<":";
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(j==f_col)
			{
				cout<<a[i][j]<<" ";
				col_sum+=a[i][j];
			}
		}
	}
	cout<<endl<<"sum of Column:"<<col_sum;
}