#include <stdio.h>
int main(){
	int i,j,count=0;
	char a[8][8];
	for(i=0;i<8;i++){
		scanf("%s",a[i]);
		for(j=0;j<8;j++){
			if(i%2==0 && j%2==0 && a[i][j]=='F') count++;
			if(i%2==1 && j%2==1 && a[i][j]=='F') count++;
		}
	}
	printf("%d",count);
}
