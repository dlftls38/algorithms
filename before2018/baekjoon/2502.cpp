#include <stdio.h>
int main(){
	int d,k;
	scanf("%d%d",&d,&k);
	int flag=0;
	int i,j,l;
	for(i=1;i<1001;i++){
		for(j=i;j<5001;j++){
			int a=i;
			int b=j;
			int some=a;
			for(l=3;l<d+1;l++){
				if(l==d && a+b==k){
					flag=1;
					break;
				}
				a=b;
				b+=some;
				some=a;
			}
			if(flag==1){
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
	printf("%d\n%d",i,j);
}
