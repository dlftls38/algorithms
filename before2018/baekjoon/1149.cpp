#include <stdio.h>
int weight[1100][3];
long long max = 99999999999;
int n;
void recur(int color,int position,long long sum){
	if(position==n){
		if(sum<max){
			max=sum;
		}
		return;
	}
	int i;
	for(i=0;i<3;i++){
		if(i!=color){
			recur(i,position+1,sum+weight[position][i]);
		}
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&weight[i][j]);
		}
	}
	if(n==2){
		long long s[2]={9999999999,9999999999};
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				if(s[i]>weight[i][j]){
					s[i]=weight[i][j];
				}
			}
		}
		printf("%d",s[0]+s[1]);
	}
	else{
		recur(-1,0,0);
		printf("%lld",max);
	}
}
