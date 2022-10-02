#include<iostream>
using namespace std;
int max_sum_subarray(int arr[], int n){
	int maxsum =0;
	int currsum =0;
	for(int i=0;i<n;i++){
		currsum = currsum + arr[i];
	if(currsum>maxsum){
		maxsum = currsum;
	}
	if(currsum<0){
		currsum=0;
	}
	}
	return maxsum;
	
	}
int main(){
	int size;
	cout<<"Enter size:";
	
	cin>>size;
	int arr[size];
	cout<<"Enter elements";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	//max_sum_subarray(arr,size);
	cout<<max_sum_subarray(arr,size);
}
