#include<iostream>
using namespace std;
class record{
	private:
	char name[100];
	char standard[30];
	char number[11];
	char address[100];
	public:
	void input();
	void output();
};
void record::input(){
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter standard : ";
	cin>>standard;
	cout<<"Enter number : ";
	cin>>number;
	cout<<"Enter address : ";
	cin>>address;
}
void record::output(){
	cout<< "name = "<<name<<endl;
	cout<< "standard = "<<standard<<endl;
	cout<< "number = "<<number<<endl;
	cout<< "address = "<<address<<endl;
}
int main(){
	record r;
	r.input();
	r.output();
}
