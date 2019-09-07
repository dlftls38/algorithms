#include <stdio.h>
int a[200][200],b[200][200],q[100000],qq[100000],h,t,check[200][200],k,count,n,m;
int bfs(int z,int zz){
	if(a[z+1][zz]==1 && check[z+1][zz]==0){
		
		check[z+1][zz]=1;
		count++;
		b[z+1][zz]=0;
		
	}
	if(a[z-1][zz]==1 && check[z-1][zz]==0){
		
		check[z-1][zz]=1;
		count++;
		b[z-1][zz]=0;
	}
	if(a[z][zz+1]==1 && check[z][zz+1]==0){
		
		check[z][zz+1]=1;
		count++;
		b[z][zz+1]=0;
	}
	if(a[z][zz-1]==1 && check[z][zz-1]==0){
		
		check[z][zz-1]=1;
		count++;
		b[z][zz-1]=0;
	}
	
	if(a[z+1][zz]==0 && check[z+1][zz]==0 && z>0 && z<n+3 && zz>0 && zz<m+3){
		
		check[z+1][zz]=1;
		q[t]=z+1;
		qq[t++]=zz;
	}
	if(a[z-1][zz]==0 && check[z-1][zz]==0 && z>0 && z<n+3 && zz>0 && zz<m+3){
		
		check[z-1][zz]=1;
		q[t]=z-1;
		qq[t++]=zz;
	}
	if(a[z][zz+1]==0 && check[z][zz+1]==0 && z>0 && z<n+3 && zz>0 && zz<m+3){
		
		check[z][zz+1]=1;
		q[t]=z;
		qq[t++]=zz+1;
	}
	if(a[z][zz-1]==0 && check[z][zz-1]==0 && z>0 && z<n+3 && zz>0 && zz<m+3){
		
		check[z][zz-1]=1;
		q[t]=z;
		qq[t++]=zz-1;
	}
	q[h]=0;
	qq[h++]=0;
	if(t>h){
		
		bfs(q[h],qq[h]);
	}
}
int main(){
	
	int i,j,count2=0,year=0;
	
	scanf("%d%d",&n,&m);
	
	for(i=2;i<n+2;i++){
		
		for(j=2;j<m+2;j++){
			
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	while(1){
		year++;
		q[t]=1;
		qq[t++]=1;
		check[1][1]=1;
		bfs(1,1);
		t=0;
		h=0;
		for(i=2;i<n+2;i++){
			
			for(j=2;j<m+2;j++){
				a[i][j]=b[i][j];
				if(a[i][j]==1){
					
					count2++;
				}
			}
		}
		for(i=1;i<n+3;i++){
			
			for(j=1;j<m+3;j++){
				check[i][j]=0;
			}
		}
		if(count2==0){
			
			printf("%d\n%d",year,count);
			break;
		}
		count=0;
		count2=0;
	}
}
