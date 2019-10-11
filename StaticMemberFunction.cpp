#include<iostream>
using namespace std;
class use{
	
		
	public:
		static int data;
		int in;
		int out;
		char name[100];
		static void input(){
			cout<<"initialize the id : ";
			cin>>data;
		}
		void firstuse();
		void seconduse();
};
void use::firstuse(){
	cout<<"enter the value of in : ";
	cin>>in;
	cout<<"enter the value of out : ";
	cin>>out;
	cout<<"enter your name : ";
	cin>>name;
}
void use::seconduse(){
	cout<<"entered name = "<<name<<endl;
	cout<<"entered in = "<<in<<endl;
	cout<<"entered out = "<<out<<endl;
	cout<<"entered id = "<<data<<endl;
}
int main(){
	use u1,u2;
	use::input();
	u1.firstuse();
	u1.seconduse();
	return 0;
}
