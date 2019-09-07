#include <stdio.h>
#include <math.h>
int a[1024],b[1024],top,k;
void gogo(int now){
	if(b[now*2+1]==0 && now*2+1<pow(2,k)-1){
		gogo(now*2+1);
	}
	if(b[now]==0){
		b[now]=a[top++];
	}
	if(b[now*2+2]==0 && now*2+2<pow(2,k)-1){
		gogo(now*2+2);
	}
}
int main(){
	int i,t=1;
	scanf("%d",&k);
	for(i=0;i<pow(2,k)-1;i++){
		scanf("%d",&a[i]);
	}
	gogo(0);
	for(i=1;i<pow(2,k);i++){
		printf("%d ",b[i-1]);
		if(t==i) printf("\n"),t=t*2+1;
	}
}
