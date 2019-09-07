#include <stdio.h>
int main(){
	char input[60][60]={0};
	char one[60][60]={0};
	char two[60][60]={0};
	int n,m,i,j,max=10000000,x=0,y=0,k=0,kk=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%s",input[i]);
	}
	for(i=0;i<55;i++){
		for(j=0;j<55;j++){
			if(i%2==0){
				if(j%2==0){
					one[i][j]='W';
					two[i][j]='B';
				}
				else{
					one[i][j]='B';
					two[i][j]='W';
				}
			}
			else{
				if(j%2==0){
					one[i][j]='B';
					two[i][j]='W';
				}
				else{
					one[i][j]='W';
					two[i][j]='B';
				}
			}
		}
	}
	while(x<m-7 && y<n-7){
		for(i=y;i<8+y;i++){
			for(j=x;j<8+x;j++){
	            if(input[i][j]!=one[i][j]){
	                k++;
	            }
	            if(input[i][j]!=two[i][j]){
	                kk++;
	            }
			}
		}
		if(max>k){
			max=k;
		}
		if(max>kk){
			max=kk;
		}
		k=0;
		kk=0;
		x++;
		if(x==m-7){
			y++;
			if(y==n-7){
				break;
			}
			else{
				x=0;
			}
		}
	}
	printf("%d",max);
}
