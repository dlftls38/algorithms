#include <stdio.h>

int r,c,n;
int a[110][110];
int qx[20000],qy[20000],tail,head;
int check[110][110];

void bfs(int y,int x){
	if(a[y][x+1]==1 && check[y][x+1]==0){
		
		check[y][x+1]=1;
		qx[tail]=x+1;
		qy[tail++]=y;
	}	
	if(a[y][x-1]==1 && check[y][x-1]==0){
		
		check[y][x-1]=1;
		qx[tail]=x-1;
		qy[tail++]=y;
	}
	if(a[y+1][x]==1 && check[y+1][x]==0){
		
		check[y+1][x]=1;
		qx[tail]=x;
		qy[tail++]=y+1;
	}
	if(a[y-1][x]==1 && check[y-1][x]==0){
		
		check[y-1][x]=1;
		qx[tail]=x;
		qy[tail++]=y-1;
	}
	
	qx[head]=0;
	qy[head++]=0;
	if(tail!=head){
		
		bfs(qy[head],qx[head]);
	}
}
int main(){
	
	int i,j,z,k=0,point=1,min=1000000;
	int hit;
	char q[200]={0};
	scanf("%d%d",&r,&c);
	for(i=1;i<r+1;i++){
		
		scanf("%s",q);
		for(j=0;j<c;j++){
			
			if(q[j]=='x'){
				
				a[i][j+1]=1;
			}
		}
		
	}
	scanf("%d",&n);
	
	for(z=0;z<n;z++){
		
		scanf("%d",&hit);
		if(z%2==0){
			
			for(j=1;j<c+1;j++){
				
				if(a[r-hit+1][j]==1){
					
					a[r-hit+1][j]=0;
					break;
				}
			}
		}
		else{
			
			for(j=c;j>0;j--){
				
				if(a[r-hit+1][j]==1){
					
					a[r-hit+1][j]=0;
					break;
				}
			}
		}
		for(j=1;j<c+1;j++){
			if(a[r][j]==1 && check[r][j]==0){
				check[r][j]=1;
				qx[tail]=j;
				qy[tail++]=r;
				bfs(r,j);
				tail=0;
				head=0;
			}
		}
		for(i=c;i>0;i--){
			
			for(j=r-1;j>0;j--){
				
				if(a[j][i]==1 && check[j][i]==0){
					while(1){
						
						if(check[j+point][i]==1 || j+point==r+1){
							point--;
							break;
						}
						else{
							
							point++;
						}
					}
					if(min>point){
						
						min = point;
					}
					point=1;
				}
			}
		}
		for(i=c;i>0;i--){
			
			for(j=r-1;j>0;j--){
				
				if(a[j][i]==1 && check[j][i]==0){
					while(1){
						
						if(check[j-k][i]==1 || j-k==0){
							
							break;
						}
						a[j+min-k][i]=a[j-k][i];
						check[j+min-k][i]=1;
						a[j-k][i]=0;
						k++;
					}
					k=0;
				}
			}
		}
		min=10000000;
		for(i=1;i<r+1;i++){
			
			for(j=1;j<c+1;j++){
				
				check[i][j]=0;
			}
		}
	}
	for(i=1;i<r+1;i++){
		
		for(j=1;j<c+1;j++){
			
			if(a[i][j]==1){
				
				printf("x");
			}
			else{
				
				printf(".");
			}
		}
		printf("\n");
	}
}
