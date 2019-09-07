#include <stdio.h>
int main(){
	int n,m,i,j,k;
	int a[4],top=0;
	int count=0,u=1000;
	scanf("%d%d",&n,&m);
	k=n;
	for(i=0;i<4;i++){
		if(k/u>0){
			for(j=i;j<4;j++){
				a[top++]=k/u;
				k%=u;
				u/=10;
			}
			break;
		}
		else{
			u/=10;
		}
	}
	i=0;
	while(1){
		printf("%d",a[i++]);
		count++;
		if(top*n>m && count==m) break;
		if(top*n<=m && count==top*n) break;
		if(i==top) i=0;
	}
}
