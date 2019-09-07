#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int ans[11]={0};
	int n;
	scanf("%d",&n);
	if(n>1022){
		printf("-1");
		return 0;
	}
	if(n==0){
		printf("0");
		return 0;
	}
	int i,j;
	int pos=0;
	int cur=0;
	while(1){
		int check=-1;
		for(i=0;i<pos;i++){
			if(ans[i]+1<ans[i+1]){
				ans[i]++;
				cur++;
				check=i;
				break;
			}
		}
		if(check==-1){
			if(ans[pos]==9){
				pos++;
				ans[pos]=pos;
			}
			else{
				ans[pos]++;
			}
			cur++;
			check=pos;
		}
		int incre=0;
		for(i=0;i<check;i++){
			ans[i]=incre++;
		}
		if(cur==n)break;
		
	}
	for(i=pos;i>=0;i--){
		printf("%d",ans[i]);
	}
}
