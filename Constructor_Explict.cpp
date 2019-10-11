#include<iostream>
using namespace std;
class constructor{
	public:
		int a,b,c;
		constructor(){
			a=0;
			b=0;
			c=0;
			cout<<a<<b<<c;
		}
		constructor(int x,int y, int z){
			a=x;
			b=y;
			c=z;
			cout<<a<<b<<c;
		}
};

int main(){
	constructor();
	constructor(2,4,5);
	constructor obj1;
//	obj1.constructor::constructor();
//	obj1.constructor::constructor(2,4,7);
}
