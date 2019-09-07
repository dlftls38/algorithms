#include <stdio.h>
int main(){
	int x,k;
	//scanf("%d%d",&x,&k);
	int i,j;
	int count=0;
	for(x=11,k=1;k<10;k++){
		count=0;
		for(i=1;i<10000000;i++){
			if(x+i==(x|i)){
				count++;
			}
			if(count==k){
				break;
			}
		}
		printf("%d\n",i);
	}
}
