#include<iostream>
using namespace std;
main()
{
	int i,c=0,n;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	for(i=1;n!=0;i++)
	{
		n=n/10;
		c++;
	}
	cout<<"number of digit:"<<c;
}