#include<iostream>
using namespace std;
class constructor{
	public:
	int a,b,c;
	constructor copyConstructor(constructor &obj);
	constructor(){
		a=0;
		b=0;
		c=0;
	}
	constructor(int x, int y, int z){
		a=x;
		b=y;
		c=z;
	}
};
constructor constructor::copyConstructor(constructor &obj){
	constructor obj1;
	obj1.a = obj.a;
	obj1.b = obj.b;
	obj1.c = obj.c;
	cout<<&obj1<<endl;
	return obj1;
}
int main(){
	constructor object(1,2,3),obj2;
	obj2=object.copyConstructor(object);
	cout<<&object<<endl;
	cout<<&obj2<<endl;
	cout<<obj2.a<<endl;
	cout<<obj2.b<<endl;
	cout<<obj2.c<<endl;
}

