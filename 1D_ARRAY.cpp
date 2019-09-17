#include <iostream>

using namespace std;

int main(){
	int i;
	cout<<"enter the length of array: "<<endl;
	cin>>i;
	int arr[i];
	cout<<"enter the "<<i<<" values of array: "<<endl;
	for(int j=0;j<i;j++){
		cin>>arr[j];
	}
	cout<<"the vector is :"<<endl;
	for(int j=0;j<i;j++){
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	cout<<"sum of vector is : "<<endl;
	int k=0,s=0;
	while(arr[k]!='\0'){
		s+=arr[k];
		k++;
	}
	cout<<s<<endl;
	return 0;
}
