#include<iostream>

using namespace std;
void addition(int a,int b);
void subtraction(int a,int b);
void multiplication(int a,int b);
void division(int a,int b);
void modulo(int a,int b);

void addition(int a,int b){
	cout<<"\nAddition of "<<a<<" and "<<b<<" is :"<<a+b<<endl<<endl;
}
void subtraction(int a,int b){
	cout<<"\nSubtraction of "<<a<<" and "<<b<<" is :"<<a-b<<endl<<endl;
}
void multiplication(int a,int b){
	cout<<"\nMultiplication of "<<a<<" and "<<b<<" is :"<<a*b<<endl<<endl;
}
void division(int a,int b){
	cout<<"\nDivision of "<<a<<" and "<<b<<" is :"<<a/b<<endl<<endl;
}
void modulo(int a,int b){
	cout<<"\nModulo of "<<a<<" and "<<b<<" is :"<<a%b<<endl<<endl;
}

main()
{
	int ch,a,b;
	do 
	{
		cout<<"Press 1 for + "<<endl;
		cout<<"Press 2 for - "<<endl;
		cout<<"Press 3 for * "<<endl;
		cout<<"Press 4 for / "<<endl;
		cout<<"Press 5 for % "<<endl;
		cout<<"Press 0 for exit "<<endl;
		cout<<endl<<"Enter Your Choice:";
		cin>>ch;
		
		
		
		switch(ch){
			case 1:
				cout<<"Enter Value Of A:";
				cin>>a;
				cout<<"Enter Value Of B:";
				cin>>b;
				addition(a,b);
				break;
			case 2:
				cout<<"Enter Value Of A:";
				cin>>a;
				cout<<"Enter Value Of B:";
				cin>>b;
				subtraction(a,b);
				break;
			case 3:
				cout<<"Enter Value Of A:";
				cin>>a;
				cout<<"Enter Value Of B:";
				cin>>b;
				multiplication(a,b);
				break;
			case 4:
				cout<<"Enter Value Of A:";
				cin>>a;
				cout<<"Enter Value Of B:";
				cin>>b;
				division(a,b);
				break;
			case 5:
				cout<<"Enter Value Of A:";
				cin>>a;
				cout<<"Enter Value Of B:";
				cin>>b;
				modulo(a,b);
				break;
			case 0:
				break;
			default:
				cout<<"\nYour Choice is wrong"<<endl<<endl;
		}
	}while(ch!=0);

}
