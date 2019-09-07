#include <stdio.h>
int main(){
	int pri[12][12];
	char input[12]={0};
	int t,n,m,i,j,count,count2;
	scanf("%d",&t);
	while(t--){
		count=0;
		count2=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<12;i++)for(j=0;j<12;j++)pri[i][j]=1;
		for(i=1;i<n+1;i++){
			scanf("%s",input);
			for(j=0;j<m;j++){
				if(input[j]=='.'){
					pri[i][j+1]=0;
					input[j]=0;
				}
			}
		}
		for(i=1;i<m+1;i+=2){
			for(j=1;j<n+1;j++){
				if(pri[j][i]==0) count++;
			}
		}
		for(i=2;i<m+1;i+=2){
			for(j=1;j<n+1;j++){
				if(pri[j][i]==0 && pri[j][i+1]==1 && pri[j][i-1]==1 && pri[j-1][i-1]==1 && pri[j-1][i+1]==1 && pri[j+1][i-1]==1 && pri[j+1][i+1]==1)count++;
			}
		}
		for(i=2;i<m+1;i+=2){
			for(j=1;j<n+1;j++){
				if(pri[j][i]==0) count2++;
			}
		}
		for(i=1;i<m+1;i+=2){
			for(j=1;j<n+1;j++){
				if(pri[j][i]==0 && pri[j][i+1]==1 && pri[j][i-1]==1 && pri[j-1][i-1]==1 && pri[j-1][i+1]==1 && pri[j+1][i-1]==1 && pri[j+1][i+1]==1)count2++;
			}
		}
		if(count>count2) printf("%d\n",count);
		else printf("%d\n",count2);
	}
}
