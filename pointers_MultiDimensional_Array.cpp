#include<iostream>
using namespace std;
int main(){
	int arr[3][4]={{2,4,5,6},{7,9,415,12},{98,51,6,65}};
	int *p;
	p=*arr;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<p+1<<endl;
	cout<<*(p+1)<<endl;
	cout<<**(arr+1)<<endl;
	cout<<arr+1<<endl;
	cout<<*arr+2<<endl;
	cout<<*arr+3<<endl;
	cout<<*arr+4<<endl;
	cout<<*arr+5<<endl;
	cout<<*arr+6<<endl;
	cout<<*arr+7<<endl;
	cout<<*arr+8<<endl;
}
