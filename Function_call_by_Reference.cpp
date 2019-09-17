#include<iostream>
using namespace std;

void SUM(int &x, int &y){
	cout<<x+y;
}
int main(){
	int a,b;
	cout<<"Enter the two values : "<<endl;
	cin>>a>>b;
	cout<<"Address "<<&a<<endl;
	cout<<"Value at address "<<*&a<<endl;
	cout<<"sum of entered numbers is : ";
	SUM(a,b);
}
