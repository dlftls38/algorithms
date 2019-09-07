#include <stdio.h>
int main(){
	int min,i,j,k;
	int light[5][5]={0},count[5][5]={0},next[5][5]={0},acc[5][5]={0},acc2[5][5]={0};
	int point[5][5]={{0,2,2,2,2},{0,1,3,4,3},{0,3,1,3,4},{0,4,3,1,3},{0,3,4,3,1}};
	light[0][0]=1;
	while(1){
		scanf("%d",&k);
		if(k==0) break;
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(light[i][j]==1){
					light[i][j]=0;
					if(count[k][j]==0){
						//printf("i=%d j=%d k=%d acc=%d hap=%d+%d\n",i,j,k,acc[k][j],acc[i][j],point[i][k]);
						acc2[k][j]=acc[i][j]+point[i][k];
					}
					else{
						if(acc2[k][j]>acc[i][j]+point[i][k]){
							//printf("i=%d j=%d k=%d acc=%d hap=%d+%d\n",i,j,k,acc[k][j],acc[i][j],point[i][k]);
							acc2[k][j]=acc[i][j]+point[i][k];
						}
					}
					if(count[i][k]==0){
						//printf("i=%d j=%d k=%d acc=%d hap=%d+%d\n",i,j,k,acc[i][k],acc[i][j],point[j][k]);
						acc2[i][k]=acc[i][j]+point[j][k];
					}
					else{
						if(acc2[i][k]>acc[i][j]+point[j][k]){
							//printf("i=%d j=%d k=%d acc=%d hap=%d+%d\n",i,j,k,acc[i][k],acc[i][j],point[j][k]);
							acc2[i][k]=acc[i][j]+point[j][k];
						}
					}
					count[k][j]=1;
					count[i][k]=1;
					next[k][j]=1;
					next[i][k]=1;
				}
			}
		}
		min=1000000;
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(next[i][j]==1){
					acc[i][j]=acc2[i][j];
					acc2[i][j]=0;
					//printf("%d ",acc[i][j]);
					if(min>acc[i][j]) min=acc[i][j];
					light[i][j]=next[i][j];
					next[i][j]=0;
					count[i][j]=0;							
				}
			}
		}
		//printf("\n");
	}
	printf("%d",min);
}
//1 2 1 2 1 2 1 2 0
