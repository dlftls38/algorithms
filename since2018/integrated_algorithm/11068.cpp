#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		int check=0;
		for(i=2;i<=64;i++){
			int temp=n;
			int ans[22]={0};
			int pos=0;
			while(temp>0){
				ans[pos++]=temp%i;
				temp/=i;
			}
			check=0;
			for(j=0;j<pos/2;j++){
				if(ans[j]!=ans[pos-1-j]){
					check=1;
				}
			}
			if(check==0){
				break;
			}
		}
		if(check==0){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
}
