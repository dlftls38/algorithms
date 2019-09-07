#include <stdio.h>
long long check[1000000];
long long wrong[1000000];
int tail;
int tail2;
int main(){
	long long n;
	scanf("%lld",&n);
	long long start=1;
	long long end=n;
	long long vasya;
	long long petya;
	long long nn;
	long long mid;
	while(1){
		if(start> end){
			printf("%lld",check[tail-1]);
			return 0;
		}
		vasya=0;
		petya=0;
		nn=n;
		mid=(start+end)/2;
		while(1){
			if(nn>=mid){
				vasya+=mid;
				nn-=mid;
			}
			else{
				vasya+=nn;
				nn=0;
			}
			if(nn==0){
				break;
			}
			if(nn<10){
				vasya+=nn;
				nn=0;
			}
			else{
				petya+=nn/10;
				nn-=nn/10;
			}
			
			if(nn==0){
				break;
			}
		}
		if(n%2==1){
			if(vasya>n/2){
				end=mid-1;
				check[tail++]=mid;
			}
			else{
				start=mid+1;
				wrong[tail2++]=mid;
			}
		}
		else{
			if(vasya>=n/2){
				end=mid-1;
				check[tail++]=mid;
			}
			else{
				start=mid+1;
				wrong[tail2++]=mid;
			}
		}
	}
}



