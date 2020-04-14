#include <iostream>
using namespace std;
int binarySearch(int* arr, int low,int high,int k){
	if (high >= low){
        int mid = (low + high)/2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            return binarySearch(arr, low, mid-1, k);
        else
            return binarySearch(arr, mid+1, high, k);
	}
    else
        return -1;
}
int main(){
	int n,result;
	cout<<"Enter the sie of array: ";
	cin>>n;
	int* arr = new int[n];
	cout<<"Enter the array elements in sorted order: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cout<<"Enter the element to be searched: ";
	cin>>k;
	result= binarySearch(arr,0,n-1,k);
	if(result!= -1){
		cout<<"Element found at "<<result;
	}else{
		cout<<"ELement not found!";
	}
	return 0;
	
}
