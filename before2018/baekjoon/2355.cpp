#include <stdio.h>
int main(){
	long long i,j,temp;
	scanf("%lld%lld",&i,&j);
	if(i>j){
		temp=i;
		i=j;
		j=temp;
	}
	if(i>=0 && j>=0) printf("%lld",(j+1)*j/2-(i-1)*i/2);
	else if(i<0 && j<0){
		i=-i;
		j=-j;
		printf("%lld",-((i+1)*i/2-(j-1)*j/2));
	}
	else printf("%lld",(j+1)*j/2-(-i+1)*(-i)/2);
}
