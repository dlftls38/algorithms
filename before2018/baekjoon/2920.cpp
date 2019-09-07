#include <stdio.h>
int main(){
	int i,k,c=8,z=0,zz=0;
	for(i=1;i<9;i++){
		scanf("%d",&k);
		if(k==c) c--,zz++;
		if(k==i) z++;
	}
	if(z==8) printf("ascending");
	else if(zz==8) printf("descending");
	else printf("mixed");
}
