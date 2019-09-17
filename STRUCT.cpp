#include<iostream>
using namespace std;
 
struct information{
	char phoneNo[11];
	char name[100];
	char address[100];
};
int main(){
	cout<<"enter the personal details :"<<endl;
	information per1;
	cout<<"Enter the address"<<endl;
	cin>>per1.address;
	cout<<"Enter the name"<<endl;
	cin>>per1.name;
	cout<<"Enter the phone number"<<endl;
	cin>>per1.phoneNo;
	cout<<per1.address<<endl<<per1.name<<endl<<per1.phoneNo ;
	
}
