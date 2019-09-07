#include <stdio.h>
int max,n,b[10][10];
void recur(int count,int x,int y){
	if(count>max){
		max=count;
	}
	if(y==n-1 && x==n){
		return;
	}
	else if(x==n){
		recur(count,0,y+1);
	}
	else{
		recur(count,x+1,y);
		if(b[y][x]>0){
			int bt_1=b[y][x];
			b[y][x]=0;
			int k;
			int stacky[100]={0};
			int stackx[100]={0};
			int top=0;
			for(k=1;y+k<n && x+k<n;k++){
				if(b[y+k][x+k]>0){
					b[y+k][x+k]=0;
					stackx[top]=x+k;
					stacky[top++]=y+k;
				}
			}	
			for(k=1;y-k>=0 && x+k<n;k++){
				if(b[y-k][x+k]>0){
					b[y-k][x+k]=0;
					stackx[top]=x+k;
					stacky[top++]=y-k;
				}
			}
			for(k=1;y+k<n && x-k>=0;k++){
				if(b[y+k][x-k]>0){
					b[y+k][x-k]=0;
					stackx[top]=x-k;
					stacky[top++]=y+k;
				}
			}
			for(k=1;y-k>=0 && x-k>=0;k++){
				if(b[y-k][x-k]>0){
					b[y-k][x-k]=0;
					stackx[top]=x-k;
					stacky[top++]=y-k;
				}
			}
			recur(count+1,x+1,y);
			b[y][x]=bt_1;
			for(k=0;k<top;k++){
				b[stacky[k]][stackx[k]]=1;
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	recur(0,0,0);
	printf("%d",max);
}
