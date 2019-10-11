#include<iostream>
using namespace std;
class constructor{
	public:
		int a,b,c;
		constructor(){      
			a=0;
			b=0;
			c=0;
		}
		void func1( constructor obj){
			cout<<obj.a<<endl;
			cout<<obj.b<<endl;
			cout<<obj.c<<endl;
		}		
};
int main(){
	constructor obj1;
	obj1.func1(obj1);
}
