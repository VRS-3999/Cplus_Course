#include<iostream>
using namespace std;
int main(){
	int a=10;
	int &R = a;
	int &r = R;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<R<<endl;
	cout<<&R<<endl;
	cout<<r<<endl;
	cout<<&r<<endl;
}
