#include<iostream>
using namespace std;
int main(){
	int size1;
	cout<<"Enter size 1:";
	
	cin>>size1;
	int arr[size1];
	cout<<"Enter elements of 1 arr";
	for(int i=0;i<size1;i++){
		cin>>arr[i];
	}
	int size2;
	cout<<"Enter size 2:";
	
	cin>>size2;
	int arr1[size2];
	cout<<"Enter elements of 2 arr:";
	for(int i=0;i<size2;i++){
		cin>>arr1[i];
		
	}
	int count=0;
	//print all element of arr
	for(int i=0;i<size1;i++){
		cout<<arr[i]<<" ";
	}
	 //print element of arr1 which are not in arr  
	for(int j=0;j<size2;j++){
		bool flag =0;
		for(int i=0;i<size1;i++){
			if(arr[i]==arr1[j]){
				flag=1;
				count++;
				break;
				
			}
		}
		if(flag!=1){
			cout<<arr1[j]<<" ";
			cout<<count<<endl;	
		}
	
    
   }
}

