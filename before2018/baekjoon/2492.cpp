#include <stdio.h>
int main(){
	int n;
	int x=0,y=0;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		x+=q;
		y+=w;
	}
	x/=n;
	y/=n;
	printf("%d %d",x,y);
}
