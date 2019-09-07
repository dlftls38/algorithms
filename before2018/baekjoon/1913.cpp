#include <stdio.h>
int t[1001][1001];
int main(){
	
	int n,count=0,count2,count3=0,a=1,b=1,i,j,x=0,y=1,p=0,o,oo,m;
	scanf("%d%d",&n,&m);
	count2=n-1;
	i=n*n;
	t[1][1]=i--;
	while(i>0){
		if(y==1) a++;
		else if(y==-1) a--;
		else if(x==1) b++;
		else b--;
		count++;
		if(count==count2){
			count3++;
			count=0;
			if(y==1){
				y=0;
				x=1;
			}
			else if(y==-1){
				y=0;
				x=-1;
			}
			else if(x==1){
				x=0;
				y=-1;
			}
			else{
				x=0;
				y=1;
			}
		}
		if(count3==3 && p==0){
			p=1;
			count3=0;
			count2--;
		}
		if(count3==2 && p==1){
			count3=0;
			count2--;
		}
		t[a][b]=i--;
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			if(t[i][j]==m){
				o=i;
				oo=j;
			}
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	printf("%d %d",o,oo);
}
