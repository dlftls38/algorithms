#include <stdio.h>
#define abs(x,y) x-y>0 ? x-y : y-x;
int n,a[8],b[8],c[8],max;
void gogo(int k,int top){
	int i,now=0;
	if(k==n){
		for(i=0;i<n-1;i++){
			now+=abs(c[i],c[i+1]);
		}
		if(max<now) max=now;
		return;
	}
	for(i=0;i<n;i++){
		if(b[i]==0){
			b[i]=1;
			c[top++]=a[i];
			gogo(k+1,top);
			c[--top]=0;
			b[i]=0;
		}
	}
}
int main(){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	gogo(0,0);
	printf("%d",max);
}
