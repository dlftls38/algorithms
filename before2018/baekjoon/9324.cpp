#include <stdio.h>
#include <string.h>
int main(){
	
	int t,i,p;
	scanf("%d",&t);
	
	while(t--){
		int c[30]={0};
		char d[110000]={0};
		scanf("%s",d);
		p=strlen(d);
		for(i=0;i<p;i++){
			
			c[d[i]-65]++;
			if(c[d[i]-65]==3){
				if(d[i]==d[i+1]){
					c[d[i]-65]=-1;
				}
				else{
					
					printf("FAKE\n");
					break;		
				}
			}
		}
		if(i==p){
			 printf("OK\n");
		}
	}
}

