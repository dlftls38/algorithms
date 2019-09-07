#include<stdio.h>
int main(){
	
	int x,y,i,j,k=-1;
	int	a[13][32]={0};
	scanf("%d%d",&x,&y);
	for(i=1;i<13;i++){
		for(j=1;j<32;j++){
			if(j==32 &&(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)){
				break;
			}
			if(j==31 &&(i==4 || i==6 || i==9 || i==11)){
				break;
			}
			if(j==29 && i==2){
				break;
			}
			if(k==6){
				k=-1;
			}
			a[i][j]=k+1;
			k++;
		}
	}
	if(a[x][y]==0)printf("MON");
	if(a[x][y]==1)printf("TUE");
	if(a[x][y]==2)printf("WED");
	if(a[x][y]==3)printf("THU");
	if(a[x][y]==4)printf("FRI");
	if(a[x][y]==5)printf("SAT");
	if(a[x][y]==6)printf("SUN");
}
