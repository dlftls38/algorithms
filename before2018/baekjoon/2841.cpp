#include <stdio.h>
int pip[7][600000];
int stack[7][600000];
int top[7];
int main(){
	int n,p,i,j,a,b,count=0;
	scanf("%d%d",&n,&p);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(top[a]>0){
			for(j=top[a]-1;j>-1;j--){
				if(stack[a][j]>b){
					pip[a][stack[a][j]]=0;
					stack[a][j]=0;
					count++;
					top[a]--;
				}
				else{
					break;
				}
			}
		}
		if(pip[a][b]==0){
			stack[a][top[a]++]=b;
			pip[a][b]=1;
			count++;
		}
	}
	printf("%d",count);
}	
