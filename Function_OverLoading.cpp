#include<iostream>
using namespace std;
void fun(int x, int y, int z){
	cout<<"first number : "<<x<<endl;
	cout<<"second number : "<<y<<endl;
	cout<<"third number : "<<z<<endl;
	cout<<"sum of three numbers : ";
	cout<<x+y+z;
	cout<<endl;
}
void fun(int x, int y){
	cout<<"first number : "<<x<<endl;
	cout<<"second number : "<<y<<endl;
	cout<<"sum of two numbers : ";
	cout<<x+y;
	cout<<endl;
}
void fun(char arr1[100],char arr2[100],char arr3[100]){
	cout<<"first String : ";
	cout<<arr1<<endl;
	cout<<"Second String : ";
	cout<<arr2<<endl;
	cout<<"Third String : ";
	cout<<arr3<<endl;
}
int main(){
	fun(5,6,7);
	fun(8,9);
	fun("vivek","is","awesome");
}
