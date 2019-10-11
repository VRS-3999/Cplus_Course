#include<iostream>
using namespace std;
int main(){
	int t1,n;
	cin>>t1;
	while(t1>0){
		int s=0,t=0;
		cin>>n;
		int q=0;
		int w=n;
		int arr[n-1];
		while(w>0){
			cin>>arr[q];
			q++;
			w--;
		}
		int e=n-1;
		while(e>0){
			int r;
			r=e-1;
			if(s>=t){
				t=0;
				while(r>-1){
				if(arr[r]%arr[e]==0){
					t++;
				}
				r--;
			}
			}
			else if(t>s){
				s=0;
				while(r>-1){
					if(arr[r]%arr[e]==0){
						s++;
					}
					r--;
				}
			}
			e--;
		}
		if(t>=s)
			cout<<t<<endl;
		else
			cout<<s<<endl;
		t1--;
	}
}
