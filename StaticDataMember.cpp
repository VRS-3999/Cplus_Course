#include<iostream>
using namespace std;
class lets{
	public:
	static int n;
	char name;
	int age;
	void func1();
	void func();
	static int wonder(){
	cout<<"value of static variable : ";
	cin>>n;
    }
};
void lets::func1(){
	cout<<"your age : ";
	cin>>age;
	cout<<"your name : ";
	cin>>name;
	cout<<"static : ";
	cout<<n<<endl;
}
void lets::func(){
	++n;
}
int main(){
	lets per1, per2;
	lets::wonder();
	per1.wonder();
	per1.func1();
	per1.func();
	cout<<"effect on other object of static variable : ";
	cout<<per2.n;
	return 0;
}

