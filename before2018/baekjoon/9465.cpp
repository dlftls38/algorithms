#include <stdio.h>

int main(){
	
	int t,n,i,j,a[2][110000]={0},q,w,e,max;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<2;i++){
			for(j=2;j<n+2;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=2;i<n+2;i++){
			for(j=0;j<2;j++){
				if(j==0){
					q=a[j][i-2];
					w=a[j+1][i-2];
					e=a[j+1][i-1];
					if(q>w){
						max=q;
					}
					else{
						max=w;
					}
					if(max<e){
						max=e;
					}
					a[j][i]+=max;
				}
				else{
					q=a[j][i-2];
					w=a[j-1][i-2];
					e=a[j-1][i-1];
					if(q>w){
						max=q;
					}
					else{
						max=w;
					}
					if(max<e){
						max=e;
					}
					a[j][i]+=max;
				}
			}
		}
		if(a[0][n+1]>a[1][n+1]){
			printf("%d\n",a[0][n+1]);
		}
		else{
			printf("%d\n",a[1][n+1]);
		}
	}
}
