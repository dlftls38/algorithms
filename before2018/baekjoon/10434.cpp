#include <stdio.h>

int main(){
	int p,i,j,point=0,z;
	long long a[11000]={0},b[11000]={0};
	scanf("%d",&p);
	
	for(i=1;i<p+1;i++){
		scanf("%d",&z);
		scanf("%d",&a[i]);
		printf("%d %d ",i,a[i]);
		if(a[i]==1){
			
			printf("NO\n");
			continue;
		}
		for(j=2;j<a[i];j++){
			
			if(a[i]%j==0){
				
				printf("NO\n");
				point=1;
				break;
			}
		}
		if(point==1){
			point=0;
			continue;
		}
		
		while(1){
			b[i]+=(a[i]%10)*(a[i]%10);
			a[i]/=10;
			if(a[i]==0){
				point++;
				if(b[i]==1){
					
					printf("YES\n");
					point=0;
					break;
				}
				else{
					
					a[i]=b[i];
					b[i]=0;
				}
			}
			if(point==10){
				
				printf("NO\n");
				point=0;
				break;				
			}
		}
	}
}
