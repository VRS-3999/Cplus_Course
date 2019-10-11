#include<iostream>
using namespace std;
int BinarySearch(int arr[], int l, int k){
	int max = (l-1);
	int min = 0;
	int guess;
	
	while(max>=min){
		guess = (max+min)/2;
		if(k==arr[guess]){
			return guess;
		}
		else if(arr[guess]>k){
			max=guess-1;
		}
		else{
			min=guess+1;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,45};
	int l = sizeof(arr)/sizeof(arr[0]);
	int k = 5;
	cout<<BinarySearch(arr,l,k)<<endl;
}
//time complexity O(log n)
//space complexity 
