#include <stdio.h>
int computer[110][110];
int top[110];
int check[110];
int n;
int count;
void recur(int now){
	int i;
	for(i=0;i<top[now];i++){
		if(check[computer[now][i]]==0){
			check[computer[now][i]]=1;
			count++;
			recur(computer[now][i]);
		}
	}
}
int main(){
	int m;
	scanf("%d%d",&n,&m);
	int i;
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		computer[a][top[a]++]=b;
		computer[b][top[b]++]=a;
	}
	check[1]=1;
	recur(1);
	printf("%d",count);
}
