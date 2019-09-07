#include <stdio.h>

char a[3000][3000];

int main(){
	
	int r,c,zr,zc,i,j,z,k;
	scanf("%d%d%d%d",&r,&c,&zr,&zc);
	
	for(i=0;i<r;i++){
		
		scanf("%s",a[i]);
	}
	for(i=0;i<r;i++){
		for(k=0;k<zr;k++){
			for(j=0;j<c;j++){
				for(z=0;z<zc;z++){
					
					printf("%c",a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
