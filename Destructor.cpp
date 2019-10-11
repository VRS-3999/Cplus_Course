#include<iostream>
using namespace std;
class destructor{
	public:
		int a;
		destructor(){
			cout<<"enter int value : ";
			cin>>a;
			cout<<"entered value : "<<a<<endl;
		}
		~destructor(){
			cout<<"destructor activates"<<endl;
		}
};
int main(){
	destructor();
	destructor d1;
	d1.destructor::~destructor();
}
