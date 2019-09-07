#include <stdio.h>
int main(){
	int q,w;
	int b=1;
	int c=1;
	int n,i;
	scanf("%d",&n);
	int max=1;
	scanf("%d",&q);
	for(i=0;i<n-1;i++){
		scanf("%d",&w);
		if(q<=w){
			b++;
			if(max<b){
				max=b;
			}
		}
		else{
			b=1;
		}
		if(q>=w){
			c++;
			if(max<c){
				max=c;
			}
		}
		else{
			c=1;
		}
		q=w;
	}
	printf("%d",max);
}
