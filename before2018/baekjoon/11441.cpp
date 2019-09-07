#include <stdio.h>

int main(){
	
	int n,m,a[110000]={0},q,w,i,j,c=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	
	for(i=0;i<m;i++){
		
		scanf("%d%d",&q,&w);
		for(j=q-1;j<w;j++){
			
			c+=a[j];
		}
		printf("%d\n",c);
		c=0;
	}
}
