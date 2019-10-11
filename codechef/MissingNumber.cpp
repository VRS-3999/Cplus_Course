#include<bits/stdc++.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	int w9=t;
	int final[t-1];
	int zz=0;
	while(t--){
	int xx;
	cin>>n;
	vector<int> arr1;
	vector<string> arr2;
		int q=0;
		while(n>0){
				int y;
				cin>>y;
				arr1.push_back(y);
				string s;
				cin>>s;
				arr2.push_back(s);
				q++;
			n--;
		}
		int v=-1;
		for(int i=0; i<q; i++){
			if(arr1[i]!=-1){
				v=i;
				break;
			}
		}
		int sum1=0;
		if(v!=-1){
			int o=arr1[v];
			int x=arr2[v].size();
			int x1=arr2[v].size();
			int p=0;
			while(x--){
				if((arr2[v][x1-p-1])*1>64){
					sum1+=((arr2[v][x1-p-1])*1-55)*pow(o,p);
					p++;
				}
				else if((arr2[v][x1-p-1])*1>=48 || (arr2[v][x1-p-1])*1<=57){
					sum1+=((arr2[v][x1-p-1])*1-48)*pow(o,p);
					p++;
				}
			}
		}
		for(int r1=0; r1<q; r1++){
			if(r1==v){
				continue;
			}
			int x5=arr2[r1].size();
			int x6=arr2[r1].size();
			int p6=0;
			int total=0;
			while(x5--){
				if((arr2[r1][x6-1-p6])*1>64){
					total+=((arr2[r1][x6-p6-1])*1-55)*pow(19,p6);
					p6++;
				}
				else if((arr2[r1][x6-p6-1])*1>=48 || (arr2[r1][x6-p6-1])*1<=57){
					total+=((arr2[r1][x6-p6-1])*1-48)*pow(19,p6);
					p6++;
				}
			}
			
			if(total<sum1){
				int x6=arr2[r1].size();
				int y1=20;
				while(total<sum1 && y1<37){
					total=0;
			int x5=arr2[r1].size();
					int p6=0;
			while(x5--){
				if((arr2[r1][x6-1-p6])*1>64){
					total+=((arr2[r1][x6-p6-1])*1-55)*pow(y1,p6);
					p6++;
				}
				else if((arr2[r1][x6-p6-1])*1>=48 || (arr2[r1][x6-p6-1])*1<=57){
					total+=((arr2[r1][x6-p6-1])*1-48)*pow(y1,p6);
					p6++;
				}
			}
			y1++;
			if(total!=sum1 && y1==37){
				final[zz]=-1;
				zz++;
			}
				}	
			}
			
			
			else if(total>sum1){
			int x6=arr2[r1].size();
					int y1=18;
				while(total>sum1){
					total=0;
			int x5=arr2[r1].size();
					int p6=0;
			while(x5--){
				if((arr2[r1][x6-1-p6])*1>64){
					total+=((arr2[r1][x6-p6-1])*1-55)*pow(y1,p6);
					p6++;
				}
				else if((arr2[r1][x6-p6-1])*1>=48 || (arr2[r1][x6-p6-1])*1<=57){
					total+=((arr2[r1][x6-p6-1])*1-48)*pow(y1,p6);
					p6++;
				}
			}
			y1--;
			if(total!=sum1 && y1==1){
				final[zz]=-1;
				zz++;
			}
				}
		}
		xx=total;
		}
		if(xx==sum1){
			final[zz]=sum1;
			zz++;
		}
	}
	
	for(int i=0; i<w9; i++){
		cout<<final[i]<<endl;
	}
}
