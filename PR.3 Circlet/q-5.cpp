
#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			if (j<i) {
                cout <<" ";
            }
            else {
                cout <<j;
            }
		}
		for(j=4;j>=i;j--)
		{
                cout <<j;
		}
		cout<<endl;
	}
}

/*
output:
    5
   454
  34543
 2345432
123454321
*/