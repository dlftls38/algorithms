#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int a[2][20]={0};
	for(i=0;i<m;i++){
		scanf("%d%d",&a[0][i],&a[1][i]);
	}
	int b[201]={0};
	for(i=0;i<m;i++){
		for(j=n;j>0;j--){
			if(b[j]>0 && j+a[0][i]<=n && b[j+a[0][i]]<b[j]+a[1][i]){
				b[j+a[0][i]]=b[j]+a[1][i];
			}
		}
		if(b[a[0][i]]<a[1][i]){
			b[a[0][i]]=a[1][i];
		}
	}
	int answer=0;
	for(i=0;i<=n;i++){
		if(answer<b[i]){
			answer=b[i];
		}
	}
	printf("%d",answer);
}
