#include <stdio.h>
int main(){
	long long a,b;
	int count;
	scanf("%lld%lld",&a,&b);
	long long i,j;
	for(i=a;i<b+1;i++){
	    int flag=0;
	    for (j = 2; j * j <= i; j++) {
	    	if(i%(j*j)==0){
	    		flag=1;
			}
	    }
	    if(flag==0){
	    	count++;
		}
	}
	printf("%d",count);
}
