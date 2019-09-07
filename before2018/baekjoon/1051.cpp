#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	char input[60][60]={0};
	for(i=0;i<n;i++){
		scanf("%s",input[i]);
	}
	int map[150][150]={0};
	for(i=0;i<150;i++){
		for(j=0;j<150;j++){
			map[i][j]=-1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			map[i][j]=input[i][j]-48;
		}
	}
	int max=1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			for(k=j+1;k<m;k++){
				if(map[i][j]==map[i][k] && map[i][j]==map[i+k-j][j] && map[i][j]==map[i+k-j][k]){
					if(max<(k-j+1)*(k-j+1)){
						max=(k-j+1)*(k-j+1);
					}		
				}
			}
		}
	}
	printf("%d",max);
}
