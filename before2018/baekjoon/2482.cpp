#include <stdio.h>
int a[1001][501];
int main(){
	int n,k,i,j;
	long long count;
	scanf("%d%d",&n,&k);
	if(k==1){
		printf("%d",n);
	}
	else{
		if(n/2<k){
			printf("0");
		}
		else{
			for(i=2;i<1001;i++){
				a[i][1]=i;
			}
			for(i=2;i<501;i++){
				for(j=i*2;j<1001;j++){
					a[j][i]=a[j-1][i]%1000000003+a[j-2][i-1]%1000000003;
					a[j][i]%=1000000003;
				}
			}
			printf("%d",a[n][k]);
		}
	}
}
