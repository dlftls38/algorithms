#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int score[100]={0};
	for(i=0;i<n;i++){
		scanf("%d",&score[i]);
	}
	int ans_num=INF;
	int ans_score=-1;
	for(i=0;i<m;i++){
		int number;
		scanf("%d",&number);
		char a;
		int sum=0;
		for(j=0;j<n;j++){
			scanf(" %c",&a);
			sum+=score[j]*(a=='O'?1:0);
		}
		if(ans_score<sum){
			ans_score=sum;
			ans_num=number;
		}
		else if(ans_score==sum && ans_num>number){
			ans_score=sum;
			ans_num=number;
		}
	}
	printf("%d %d",ans_num,ans_score);
}
