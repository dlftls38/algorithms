#include <stdio.h>
int m,n,map[52][52];
void recur(int i,int j){
	if(map[i][j+1]==1){
		map[i][j+1]=0;
		recur(i,j+1);
	}
	if(map[i][j-1]==1){
		map[i][j-1]=0;
		recur(i,j-1);
	}
	if(map[i+1][j]==1){
		map[i+1][j]=0;
		recur(i+1,j);
	}
	if(map[i-1][j]==1){
		map[i-1][j]=0;
		recur(i-1,j);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int count=0;
		int i,j,k;
		scanf("%d%d%d",&m,&n,&k);
		for(i=1;i<n+1;i++){
			for(j=1;j<m+1;j++){
				map[i][j]=0;
			}
		}
		for(i=0;i<k;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			map[y+1][x+1]=1;
		}
		for(i=1;i<n+1;i++){
			for(j=1;j<m+1;j++){
				if(map[i][j]==1){
					count++;
					map[i][j]=0;
					recur(i,j);
				}
			}
		}
		printf("%d\n",count);
	}
}
