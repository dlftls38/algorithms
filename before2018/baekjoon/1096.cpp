#include <stdio.h>
int max,k,p,count;
void brt(int z[12][12],int y,int x){
	int q[12][12],i,j;
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			if(max<z[i][j]) max=z[i][j];
		}
	}
	if(x<=1 && y<=1) return;
	if(y>1){
		for(i=0;i<y-1;i++){
			p=i+1;
			count=0;
			for(j=0;j<y;j++){
				for(k=0;k<x;k++){
					q[j][k]=z[j][k];
				}
			}
			for(j=i;j>=0;j--){
				if(j>=0 && p<=y-1){
					count++;
					for(k=0;k<x;k++){
						q[j][k]+=q[p][k];
					}
					p++;
				}
			}
			for(j=i+1;j<y-1;j++){
				for(k=0;k<x;k++){
					q[j][k]=q[j+1][k];
				}
			}
			brt(q,y-count,x);
		}
	}
	if(x>1){
		for(i=0;i<x-1;i++){
			p=i+1;
			count=0;
			for(j=0;j<y;j++){
				for(k=0;k<x;k++){
					q[j][k]=z[j][k];
				}
			}
			for(j=i;j>=0;j--){
				if(j>=0 && p<=x-1){
					count++;
					for(k=0;k<y;k++){
						q[k][j]+=q[k][p];
					}
					p++;
				}
			}
			for(j=i+1;j<x-1;j++){
				for(k=0;k<y;k++){
					q[k][j]=q[k][j+1];
				}
			}
			brt(q,y,x-count);
		}
	}
}
int main(){
	int n,m,a[12][12],i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);
	brt(a,n,m);
	printf("%d",max);
}
