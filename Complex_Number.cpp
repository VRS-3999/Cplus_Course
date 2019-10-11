#include<iostream>
using namespace std;
class ad{
	public:
		int real;
		int imag;
		ad(int x=0,int y=0){
			real=x;
			imag=y;
		}
		ad operator+(ad obj1);
		ad operator+(int q);
		friend ostream& operator<<(ostream& out, ad& obj);
		friend istream& operator>>(istream& in, ad& obj);
};
ostream& operator<<(ostream& out, ad& obj){
	cout<<obj.real<<" + i "<<obj.imag;
}
istream& operator>>(istream& in, ad& obj){
	cout<<"real part : ";
	in>>obj.real;
	cout<<"imag part : ";
	in>>obj.imag;
	
}
ad ad::operator+(ad obj1){
	ad obj2;
	obj2.real=real+obj1.real;
	obj2.imag=imag+obj1.imag; 
	return obj2;
}
ad ad::operator+(int q){
	ad obj2;
	obj2.real=real+q;
	obj2.imag=imag; 
	return obj2;
}
ad operator+(int x, ad obj){
	obj.real=x+obj.real;
	return obj; 
}
int main(){
	ad obj1,obj2,obj3,obj4;
	int p,q;
	cout<<"enter the CN 1"<<endl;
	cin>>obj1;  
	cout<<"enter the CN 2"<<endl;
	cin>>obj2;
	cout<<"enter the integer to be added : ";
	cin>>p;
	cout<<"enter the integer to be added : ";
	cin>>q;
	obj3=q+obj1+obj2+p;
	cout<<obj3<<endl;
}

