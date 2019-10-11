#include<iostream>
using namespace std;
	int LinearSearch(int arr[], int l, int k){
	for(int i=0;i<l;i++){
		if(arr[i]==k){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={4,9,1,456,456,12,3,7,1,321,87,984,123,16,5,89,4,132,4,4897,4,13,24,9864,984,1,6};
	int k=6;
	int l= 27;
	cout<<LinearSearch(arr,l,k);	
}
//time complexity o(n)
//space complexity 
