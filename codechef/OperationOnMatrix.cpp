#include<iostream>
#include<vector>
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
   	int T, arr[2],q,w;
	fastscan(T);
	while(T--){
		q=3;
		w=0;
		while(q--){
			fastscan(arr[w]);
			w++;
		}
		int N= arr[0];
		int M= arr[1];
		int Q= arr[2];
		vector<int> Ma1(M,0);
		vector<vector<int> > Ma(N,Ma1);
		while(Q--){
		 q=2;
		 w=0;
		 while(q--){
		 	fastscan(arr[w]);
		 	w++;
		 }
		 int w1=0;
		 int w2=0;
		 int l=1;
		 while(w1<M/2+1){
		 	Ma[arr[0]-1][w1]+=1;
		 	if((M/2+l)<M)
		 		Ma[arr[0]-1][M/2+l]+=1;
		 	l++;
		 	w1++;
		 }
		 int u=1;
		 while(w2<N/2+1){
		 	Ma[w2][arr[1]-1]+=1;
		 	if((N/2+u)<N)
		 		Ma[N/2+u][arr[1]-1]+=1;
		 	u++;
		 	w2++;
		 }
		 
	}
	int odd=0;
	int i=0;
	int j=0;
		while(i<N){
			int k=1;
			while(j<M/2+1){
				if(j<M && Ma[i][j]%2!=0){
					odd++;
				}
				if((M/2+k)<M && Ma[i][M/2+k]%2!=0){
					odd++;
				}
				k++;
				j++;
			}
			j=0;
			i++;
		}
		cout<<odd<<endl;
		
	}
}
