#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the size of array";
	int n;
	cin>>n;
	int arr = new int[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched: ";
	int k;
	cin>>k;
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			cout<<"Element found at index "<<i;
			return 0;
		}
	}
	cout<<"Element not found!";
return 0;
}
