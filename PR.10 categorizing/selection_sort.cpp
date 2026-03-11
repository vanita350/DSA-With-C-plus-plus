#include<iostream>
using namespace std;
main(){
	int arr[]={5,3,8,4,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int minIndex,temp;
	cout<<"\nBefore Sorting Array..........."<<endl<<endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	for (int i=0;i<n;i++){
		minIndex=i;
		
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		if (minIndex != i) {
			temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
	cout << "\n\nAfter Sorting Array..........."<<endl<<endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
		
}
