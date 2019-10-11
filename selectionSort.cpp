#include<iostream>
using namespace std;
int main(){
	int arr[]={10,7,5,6,7,1,2,3,1,8};
	for(int i=0;i<10;i++){
		int k=i;
		for(int j=i+1;j<10;j++){
			if(arr[k]>arr[j]){
		    	k=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[k];
		arr[k]=temp;
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
}
//time complexity = O(n2)
//space complexity = O(1)
