#include<iostream>
using namespace std;

main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			cout<<" ";
		}
		for(j=5;j>=i;j--)
		{
			if(j%2==0)
			{
				cout<<"0";
			}
			else{
				cout<<"1";
			}
		}
		cout<<endl;
	}
}

/*
output:
10101
 1010
  101
   10
    1
*/