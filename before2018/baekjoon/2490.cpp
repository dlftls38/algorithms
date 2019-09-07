#include <stdio.h>
int main(){
	int a[3]={0},k,i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&k);
			a[i]+=k;
		}
		if(a[i]==4) printf("E\n");
		else if(a[i]==0) printf("D\n");
		else if(a[i]==1) printf("C\n");
		else if(a[i]==2) printf("B\n");
		else printf("A\n");
	}
}
