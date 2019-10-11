#include<iostream>
using namespace std;

bubble_sort(int arr[], int l){
	for(int i=0;i<l;i++){
		for(int j=0;j<l-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

insertion_sort(int arr[], int l){
	for(int i=1; i<l; i++){
		int j = i-1;
		int key = arr[i];
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

selection_sort(int arr[],int l){
	for(int i=0;i<l;i++){
		int k=i;
		for(int j=i+1;j<l;j++){
			if(arr[k]>arr[j]){
				k=j;
			}
		}
		int temp = arr[i];
		arr[i]=arr[k];
		arr[k]=temp;
		
	}
}

int binarysearch(int arr[],int end, int n){
	int min = 0;
	int max = end-1;
	while(min<=max){
		int mid = (min+max)/2;
		if(arr[mid]==n){
			return mid;
		}
		else if(arr[mid]>n){
			max = mid-1;
		}
		else
			min = mid+1;
	}
}
void merge_sort(int arr[], int start, int mid, int end){
	int p1=start;
	int p2=mid+1;
	int temp[end-start+1];
	int k=0;
	for(int i=start;i<=end;i++){
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
			temp[k++]=arr[p2++];
	}
	for(int p=0;p<k;p++){
		arr[start++]=temp[p];
	}
}
void merge(int arr[],int start, int end){
	if(start<end){
		int mid = (start+end)/2;
		merge(arr,start,mid);
		merge(arr,mid+1,end);
		merge_sort(arr,start,mid,end);
	}
}
swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int start,int end){
	int pivot = arr[end];
	int i= start-1;
	for(int j=0;j<=end;j++){
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
		int q=partition(arr,start,end);
		quicksort(arr,start,q-1);
		quicksort(arr,q+1,end);
	}
}

int main(){
	int arr[]={1,5,6,79,2,1,5,4,8,4,321,65,4,498,41,5,7,9};
//	int sea[]={1,2,3,4,5,6,7,8,9,10,11,12,15,19,21,23,24,56,68,70,78,79,80,82,83,84,89,90,92,93,94,98,100};
//	bubble_sort(arr,18);
//	insertion_sort(arr,18);
//	selection_sort(arr,18);
//	merge(arr,0,17);
	quicksort(arr,0,17);
	for(int i=0; i<18;i++){
		cout<<arr[i]<<endl;
	}
//	cout<<binarysearch(sea,33,68)<<endl;
}
