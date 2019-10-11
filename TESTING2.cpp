#include<iostream>
using namespace std;
swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int partition(int arr[], int start, int end){
	int pivot = arr[end];
	int j=start-1;
	for(int i=start;i<end;i++){
		if(arr[i]<pivot){
			j++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[j+1],arr[end]);
	return (j+1);
}
quick(int arr[], int start, int end){
	if(start<end){
	int q= partition(arr,start, end);
	quick(arr,start,q-1);
	quick(arr,q+1,end);
}
}
int main(){
	int arr[]={1,6,4,96,49,1,6321,8,654,18,654,89,61,32,18,46};
	quick(arr,0,15);
	for(int i=0;i<16;i++){
		cout<<arr[i]<<endl;
	}

}
