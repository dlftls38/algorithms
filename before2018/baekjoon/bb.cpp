#include <stdio.h>

long long int k[51][51];
int main(){
	
	int t,i,j,a,m;
	
	scanf("%d",&t);
	
	k[1][0]=1;
	k[2][0]=1;
	k[2][1]=1;
	for(i=0;i<t;i++){
		
		scanf("%d",&a);
		if(a==1){
			
			printf("1\n");
		}
		else if(a==2){
			
			printf("1\n1 1\n");
		}
		else{
	
		for(j=3;j<a+1;j++){
			for(m=1;m<a;m++){
				k[j][0]=1;
				k[j][m]=k[j-1][m-1]+k[j-1][m];
			}
		}
		printf("1\n1 1\n");
		for(j=3;j<a+1;j++){
			for(m=0;m<a;m++){
				if(k[j][m] != 0){
				
				printf("%lld ",k[j][m]);
			}
			}
			printf("\n");
		}
		}
	}
}
