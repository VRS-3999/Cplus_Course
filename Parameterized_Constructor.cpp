#include<iostream>
using namespace std;
class constructor{
	public:
		int a,b,c;
		constructor(int x, int y, int z){
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
	constructor obj1(2,5,6);
	obj1.func1(obj1);
}
