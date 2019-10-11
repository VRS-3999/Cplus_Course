#include<iostream>
using namespace std;
class constructor{
	public:
		int a,b,c;
		constructor(int x=0, int y=0, int z=0){
			a=x;
			b=y;
			c=z;
		}
		void func1( constructor obj){
			cout<<obj.a<<endl;
			cout<<obj.b<<endl;
			cout<<obj.c<<endl;
		}		
};
int main(){
	constructor obj1(2,5);
	obj1.func1(obj1);
}
