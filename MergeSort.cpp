#include<iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end){
	int p1=start;
	int p2=mid+1;
	int temp[end-start+1];
	int k=0;
	
		if(p1>mid){
			temp[k++]=arr[p2++];
		}
		else if(p2>end){
			temp[k++]=arr[p1++];
		}
		else if(arr[p1]<arr[p2]){
			temp[k++]=arr[p1++];
		}
		else
			temp[k++] = arr[p2++];

	for(int p=0;p<k;p++){
		arr[start++]=temp[p];
	}
}
void merge_sort(int arr[],int start,int end){
	if(start<end){
		int mid=(start+end)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
int main(){
	int arr[]={1,45,78,1,6,623,49,65,32};
	merge_sort(arr,0,8);
	for(int i=0;i<9;i++){
		cout<<arr[i]<<endl;
	}
}
