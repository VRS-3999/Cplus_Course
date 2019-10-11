#include<iostream>
using namespace std;
int main(){
	int arr[]={7,6,4,3,12,9,1,65,66,1,7,3};
	for(int j=0;j<12;j++){
		int f=0;
	for(int i=0;i<(11-j);i++){
		if(arr[i]>=arr[i+1]){
			int t=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=t;
			f=1;
		}
	}
	if(!f){
		break;
	}
}
	for(int i=0;i<12;i++){
		cout<<arr[i]<<endl;
	}
}
//time complexity = O(n2)
//space complexity = O(1)
