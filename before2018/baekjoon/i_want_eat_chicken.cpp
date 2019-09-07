#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int x=b/a*d;
		int count=0;
		int flag=0;
		while(1){
			if(c<=x){
				if(flag==0){
					
				}
				else{
					count+=x/c;	
				}
				x=x%c+x/c*d;
				flag=1;
			}
			else{
				break;
			}
		}
		printf("%d\n",count);
	}
}
