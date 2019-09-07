#include <stdio.h>
int something[200][200],n;
int flag=0;
int c[200][200];
void recur(int check[200],int now){
	if(flag==1){
		return;
	}
	if(check[now]==2){
		flag=1;
		return;
	}
	int i;
	for(i=1;i<n+1;i++){
		if(something[now][i]==1 && c[now][i]==0){
			c[now][i]=1;
			check[i]++;
			recur(check,i);
			check[i]--;
		}
	}
}
int main(){
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		for(j=0;j<a;j++){
			int b;
			scanf("%d",&b);
			something[i+1][b]=1;
		}
	}
	for(i=1;i<n+1;i++){
		int check[200]={0};
		check[i]=1;
		recur(check,i);	
	}
	if(flag==1){
		printf("No");  
	}
	else{
		printf("Yes");
	}
}
