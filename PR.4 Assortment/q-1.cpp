//Q-1 Negative Elements in 1D Array

#include<iostream>
using namespace std;
main()
{
	int i,n;
	cout<<"Enter Size Of Array:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	cout<<endl;
	cout<<"Negative Elements From an Array:";
	for(i=0;i<n;i++)
	{
		if(a[i]<=0)
		{
			cout<<a[i]<<",";
		}
	}
}