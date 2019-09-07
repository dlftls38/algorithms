#include <stdio.h>

int a[1000][1000]={0},b[1000][1000]={0},check[1000][1000]={0},q[100000]={0},qq[100000]={0},h=0,t=0,k=0,year=0;

int bfs(int z,int zz){
	check[z][zz]=1;
	if(a[z+1][zz]>0 && check[z+1][zz]==0){
		check[z+1][zz]=1;
		q[t]=z+1;
		qq[t++]=zz;
	}
	if(a[z-1][zz]>0 && check[z-1][zz]==0){
		check[z-1][zz]=1;
		q[t]=z-1;
		qq[t++]=zz;
	}
	if(a[z][zz+1]>0 && check[z][zz+1]==0){
		check[z][zz+1]=1;
		q[t]=z;
		qq[t++]=zz+1;
	}
	if(a[z][zz-1]>0 && check[z][zz-1]==0){
		check[z][zz-1]=1;
		q[t]=z;
		qq[t++]=zz-1;
	}
	q[h]=0;
	q[h++]=0;
	if(t-h>0){
		
		bfs(q[h],qq[h]);
	}
}
int main(){
	
	int n,m,i,j,c=0;
	
	scanf("%d%d",&n,&m);
	
	for(i=1;i<n+1;i++){
		
		for(j=1;j<m+1;j++){
			
			scanf("%d",&a[i][j]);
		}
	}
	while(1){
		for(i=1;i<n+1;i++){
			
			for(j=1;j<m+1;j++){
				
				if(a[i][j]>0){
					
					if(a[i+1][j]==0){
						
						c++;
					}
					if(a[i-1][j]==0){
						
						c++;
					}
					if(a[i][j+1]==0){
						
						c++;
					}
					if(a[i][j-1]==0){
						
						c++;
					}
					b[i][j]=a[i][j]-c;
					if(b[i][j]<0){
						
						b[i][j]=0;
					}
				}
				c=0;
			}
		}
		
		for(i=1;i<n+1;i++){
			
			for(j=1;j<m+1;j++){
				
				a[i][j]=b[i][j];
			}
		}
		year++;
		for(i=1;i<n+1;i++){
			
			for(j=1;j<m+1;j++){
				
				if(a[i][j]>0 && check[i][j]==0){
					k++;
					q[t]=i;
					qq[t++]=j;
					bfs(i,j);
					t=0;
					h=0;
				}
			}
		}
		if(k>1){
			
			printf("%d",year);
			break;
		}
		if(k==0){
			
			printf("0");
			break;		
		}
		k=0;
		for(i=1;i<n+1;i++){
			
			for(j=1;j<m+1;j++){
				
				check[i][j]=0;
			}
		}
		
	}
}
