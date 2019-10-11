#include<iostream>
using namespace std;
// try to do with for while

int main(){
	int arr[]={9,8,1,6,7,4,2,9,1,4,5,6,2,1};
	int key=1;
	for(int i=0;i<14;i++){
		for(int j=0; j<key; j++){
		if(arr[key]<arr[j]){
		int temp = arr[j];
		arr[j]=arr[key];
		arr[key]=temp;
		}		
		}
		key++;
	}
	for(int i=0;i<14;i++){
		cout<<arr[i]<<endl;
	}
}
