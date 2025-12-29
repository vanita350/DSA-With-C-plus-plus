#include<iostream>
using namespace std;
main()
{
	int i,sum=0,n;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	i=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	sum=i+n;
	
	cout<<"number of digit:"<<sum;
}
