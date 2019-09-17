#include<iostream>
using namespace std;
int main(){
	int l,h;
	cout<<"enter the length and height of the array: "<<endl;
	cin>>l>>h;
	int arr1[l][h];
	int *p;
	p=*arr1;
	cout<<"enter the values of array : "<<endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<l;j++){
			cin>>*p;
			p++;
		}
	}
	p=*arr1;
	cout<<"the entered values are :"<<endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<l;j++){
			cout<<*p<<endl;
			p++;
		}
	}
	
}
