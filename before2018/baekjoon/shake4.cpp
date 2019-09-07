#include <stdio.h>
int cost[100];
int satis[100][10];
int satis2[100][10];
int num[100];
int c[999999]={0};
int main(){
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&cost[i]);
		scanf("%d",&num[i]);
		for(j=0;j<num[i];j++){
			scanf("%d",&satis2[i][j]);
			for(k=0;k<j+1;k++){
				satis[i][j]+=satis2[i][k];
			}
		}
	}
	for(i=0;i<n;i++){
		int d[500000]={0};
		for(j=0;j<num[i];j++){
			if(d[cost[i]*(j+1)]<satis[i][j]){
				d[cost[i]*(j+1)]=satis[i][j];	
			}
			for(k=0;k<m+1;k++){
				if(c[k]>0 && d[k+cost[i]*(j+1)]<c[k]+satis[i][j]){
					d[k+cost[i]*(j+1)]=c[k]+satis[i][j];
				}
			}
		}
		for(j=0;j<m+1;j++){
			if(c[j]<d[j]){
				c[j]=d[j];
			}
		}
	}
	int max=0;
	for(i=0;i<m+1;i++){
		if(max<c[i]){
			max=c[i];
		}
	}
	printf("%d",max);
}
