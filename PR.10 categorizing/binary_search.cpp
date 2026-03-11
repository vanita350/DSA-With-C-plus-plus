#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int target){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==target){
			return mid;
		}else if(a[mid<target]){
			low=mid+1;
		}else{
			high=mid-1;	
		}
	}
	return -1;
}
main(){
	int a[]={12,15,20,23,26,28};
	int n=sizeof(a)/sizeof(a[0]);
	int target;
	cout<<"Enter Element To find:";
	cin>>target;
	int result=binarySearch(a,n,target);
	if(result!=-1){
		cout<<"\nElement found At Index : "<<result<<endl;
	}else{
		cout<<"\nElement Not Found"<<endl;
	}
	
}
