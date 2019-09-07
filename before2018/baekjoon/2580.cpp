#include <stdio.h>
int a[9][9],q[90],q2[90],top,p;
void chak(int k){
	int z[10]={0},i,j,count=0;
	if(p==1) return;
	for(i=0;i<9;i++){
		z[a[q[k]][i]]=1;
		z[a[i][q2[k]]]=1;
	}
	if(0<=q[k] && q[k]<3){
		if(0<=q2[k] && q2[k]<3){
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
		else if(3<=q2[k] && q2[k]<6){
			for(i=0;i<3;i++){
				for(j=3;j<6;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
		else if(6<=q2[k] && q2[k]<9){
			for(i=0;i<3;i++){
				for(j=6;j<9;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
	}
	else if(3<=q[k] && q[k]<6){
		if(0<=q2[k] && q2[k]<3){
			for(i=3;i<6;i++){
				for(j=0;j<3;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
		else if(3<=q2[k] && q2[k]<6){
			for(i=3;i<6;i++){
				for(j=3;j<6;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
		else if(6<=q2[k] && q2[k]<9){
			for(i=3;i<6;i++){
				for(j=6;j<9;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
	}
	else if(6<=q[k] && q[k]<9){
		if(0<=q2[k] && q2[k]<3){
			for(i=6;i<9;i++){
				for(j=0;j<3;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
		else if(3<=q2[k] && q2[k]<6){
			for(i=6;i<9;i++){
				for(j=3;j<6;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
		else if(6<=q2[k] && q2[k]<9){
			for(i=6;i<9;i++){
				for(j=6;j<9;j++){
					z[a[i][j]]=1;
					z[a[i][j]]=1;	
				}
			}
		}
	}
	for(i=1;i<10;i++){
		if(z[i]==0){
			a[q[k]][q2[k]]=i;
			chak(k+1);
			a[q[k]][q2[k]]=0;
		}
		else{
			count++;
		}
	}
	if(k==top && count==9){
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		p=1;
	}
	return;
}
int main(){
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				q[top]=i;
				q2[top++]=j;
			}
		}
	}
	chak(0);
}
