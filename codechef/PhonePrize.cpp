#include<iostream>
using namespace std;
int main(){
	int T,N;
	cin>>T;
	while(T){
		cin>>N;
		int P[N-1];
		int j=0;
		while(N>0){
			cin>>P[j];
			j++;
			N--;
		}
		int o=1;
		int y=1;
		while(o<j){
			if(o==1 && P[o-1]>P[o]){
				y+=1;
				o++;
			}
			else if(o==2 && P[o-1]>P[o] && P[o-2]>P[o]){
				y+=1;
				o++;
			}
			else if(o==3 && P[o-1]>P[o] && P[o-2]>P[o] && P[o-3]>P[o]){
				y+=1;
				o++;
			}
			else if(o==4 && P[o-1]>P[o] && P[o-2]>P[o] && P[o-3]>P[o] && P[o-4]>P[o]){
				y+=1;
				o++;
			}
			else if(o>4 && P[o-1]>P[o] && P[o-2]>P[o] && P[o-3]>P[o] && P[o-4]>P[o] && P[o-5]>P[o]){
				y+=1;
				o++;
			}
			else{
				o++;
			}
		}
		cout<<y<<endl;
		y=1;
	T--;
	}
}

