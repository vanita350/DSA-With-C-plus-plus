#include<iostream>
using namespace std;

main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{	
		if (j < i) {
               cout <<" ";
            }
            else {
                cout <<j;
            }
		}
		cout<<endl;
	}
}

/*
output:
    5
   45
  345
 2345
12345
*/