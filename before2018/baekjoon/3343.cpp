#include <stdio.h>
void swap(unsigned long long * swap1,unsigned long long * swap2){
	unsigned long long nTemp;
	nTemp = *swap1;
	*swap1 = *swap2;
	*swap2 = nTemp;
}
int main(){
	unsigned long long n,a,b,c,d,k=1,q1=0,q2,cost1=0,cost2;
	scanf("%llu%llu%llu%llu%llu",&n,&a,&b,&c,&d);
	if(b*c>a*d){
		swap(&a,&c);
		swap(&b,&d);
	}
	while(n>=a*k*10) k*=10;
	while(1){
		if(n>=q1+a*k){
			q1+=a*k;
			cost1+=b*k;
		}
		else{
			if(k==1){
				q2=q1;
				cost2=cost1;
				if(q1<n){
					cost1+=b*k;
				}
				break;
			}
			else k/=10;
		}
	}
	while(n>=c*k*10) k*=10;
	while(1){
		if(n>=q2+c*k){
			q2+=c*k;
			cost2+=d*k;
		}
		else{
			if(k==1){
				if(q2<n){
					cost2+=d*k;
				}
				break;
			}
			else k/=10;
		}
	}
	if(cost1>cost2) printf("%llu",cost2);
	else printf("%llu",cost1);
}
