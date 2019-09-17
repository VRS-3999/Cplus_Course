#include<iostream>
using namespace std;
 
union information{         
	char phoneNo[11];
	char name[100];
	char address[100];
};
int main(){
	cout<<"enter the personal details :"<<endl;
	information per1;
	cout<<"Enter the address"<<endl;
	cin>>per1.address;
	cout<<"Entered Address : "<<per1.address<<endl;
	cout<<"Enter the name"<<endl;
	cin>>per1.name;
	cout<<"Entered Name : "<<per1.name<<endl;
	cout<<"Enter the phone number"<<endl;
	cin>>per1.phoneNo;
	cout<<"Entered Phone No. : "<<per1.phoneNo ;
	
}
