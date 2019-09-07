#include <stdio.h>
#define max(a,b) (a>b?a:b)
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int Max=0;
	for(i=0;i<n;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if (a==b && b==c){
			if(10000+a*1000>Max){
				Max=10000+a*1000;
			}
		}
		else if(a==b || b==c || a==c){
			if(1000+a*100>Max){
				Max=1000+a*100;
			}
		}
		else{
			if(max(a,max(b,c))>Max){
				Max=max(a,max(b,c));
			}
		}
	}
	printf("%d",Max);
}
