#include <iostream>
using namespace std;
void fastscan(int &number) 
{ 
    bool negative = false; 
    register int c; 
    number = 0;  
    c = getchar(); 
    if (c=='-') 
    {  
        negative = true;  
        c = getchar(); 
    } 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    if (negative) 
        number *= -1; 
} 
int main(){
	int t;
	fastscan(t);

	
	while(t>0){
		int q1=0;
		int q2=2;
		int arr[1];
		while(q2>0){
			fastscan(arr[q1]);
			q1++;
			q2--;
		}
		int w1=0;
		int w2=arr[0];
		int A[arr[0]-1];
		while(w2>0){
			fastscan(A[w1]);
			w1++;
			w2--;
		}
		for(int j=0;j<arr[1];j++){
			int a= A[j%arr[0]];
			int b= A[arr[0]-1-(j%arr[0])];
			A[j%arr[0]]=a^b;
		}
		cout<<A[0];
		for(int k=1;k<arr[0];k++){
			cout<<" "<<A[k];
		}
		cout<<"\n";
		t--;
	}
}
