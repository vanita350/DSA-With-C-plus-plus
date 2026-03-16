#include<iostream>
#include<vector>
using namespace std;
void print_array(vector<int> &a){
	cout<<"array :- ";
	for(int i=0;i<a.size();i++){
	   cout<<a[i]<<" ";
    }
    cout<<endl;
}
void merge(vector<int> &a,int low, int mid, int high){
    vector<int> tmp;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right <= high){
        if(a[left] <= a[right]){
            tmp.push_back(a[left]);
            left++;
        }else{
            tmp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        tmp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        tmp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i] = tmp[i-low];
    }
}
void merge_sort(vector<int> &a,int low,int high){
    if(low>=high){
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(a, low, mid); 
    merge_sort(a, mid+1, high);
    merge(a,low,mid,high);
}
main(){
        int n;
        cout<<"Enter array size :- ";
        cin>>n;
        vector<int> a;
        cout<<"Enter Array Elements : "<<endl;
        for(int i=0;i<n;i++){
	        int element;
	        cout<<"Enter a["<< i <<"] : ";
	        cin>>element;
	        a.push_back(element);
        }
        print_array(a);
        merge_sort(a,0,n-1);
        print_array(a);
} 
