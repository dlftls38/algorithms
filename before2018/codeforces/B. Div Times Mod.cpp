#include <stdio.h>
int main(){
	int n,k;
	//scanf("%d%d",&n,&k);
	int p=1000;
	for(int j=1+p;j<2+p;j++){
		for(int i=2;i<1001;i++){
			long long x=1;
			n=j;
			k=i;
			while(1){
				if((x/k)*(x%k)==n){
					break;
				}
				x++;
			}
			printf("%d %d = %lld\n",n,k,x);
		}
	}
}
