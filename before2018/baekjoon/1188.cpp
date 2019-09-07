#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<11;i++){
		for(j=1;j<11;j++){
			printf("%lf\n",1.0*i/j);
		}
	}
}
