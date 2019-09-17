#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter value : "<<endl;
	cin>>a;
	switch(a){
		case 1: cout<<"value entered 1"<<endl;
				break;
		case 2: cout<<"value entered 2"<<endl;
				break;
		case 3: cout<<"value entered 3"<<endl;
				break;
		default: cout<<"value should be between 0 and 4";
	}			
}
