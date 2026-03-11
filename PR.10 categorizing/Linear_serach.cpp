#include<iostream>
using namespace std;
int linearSearch(int a[],int n,int target){
	for(int i=0;i<n;i++){
		if(a[i]==target){
			return i;
		}
	}
	return -1;
}
main(){
	int a[]={5,4,8,21,9};
	int target;
	
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Enter Element To find:";
	cin>>target;
	int result=linearSearch(a,n,target);
	if(result!=-1){
		cout<<"\nElement found At Index : "<<result<<endl;
	}else{
		cout<<"\nElement Not Found"<<endl;
	}
	
}
