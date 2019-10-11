#include<iostream>
using namespace std; 
void swap(int* a, int* b){
	int temp =*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int start,int end){
	int pivot = arr[end];
	int i = start -1;
	for (int j= start; j<=end-1; j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	} 
	swap(arr[i+1],arr[end]);
	return (i+1);
}
void quicksort(int arr[], int start, int end){
	if(start<end){
		int q= partition(arr,start,end);
		quicksort(arr,start,q-1);
		quicksort(arr,q+1,end);
	}
}
int main(){
	int arr[]={4,9,1,654,123,14,84,98,123,1,65,41,631,56,4,89,41,653,128,94,16,532,18,64,16};
	int end = sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,end-1);
	for(int i=0;i<end;i++){
		cout<<arr[i]<<endl;
	}
}
