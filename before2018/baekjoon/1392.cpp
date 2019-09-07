#include <stdio.h>

int main(){
	
	int n,q,i,j,m;
	int count=0;
	int a[110];
	
	scanf("%d%d",&n,&q);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<q;i++){
		
		scanf("%d",&m);
		
		for(j=0;j<n;j++){
			
			count+=a[j];
			if(m<count){
				
				printf("%d\n",j+1);
				count=0;
				break;
			}
		}
	}
}
