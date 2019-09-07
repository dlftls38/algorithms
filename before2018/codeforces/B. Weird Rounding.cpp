#include <stdio.h>
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long d=1;
	for(int i=0;i<k;i++){
		d*=10;
	}
	int answer=0;
	while(1){
		//printf("%d\n",n);
		if(d>n){
			while(1){
				if(n>=10){
					n/=10;
					answer++;
				}
				else{
					break;
				}
			}
			break;
		}
		else{
			if(n%d==0){
				break;
			}
			else{
				while(1){
					long long t=1;
					for(int i=0;i<k;i++){
						//printf("%d %d\n",n%d,t);
						if(((n%d)/t)%10>0){
							answer++;
							n-=(((n%d)/t)%10)*(t);
							n/=10;
							break;
						}
						t*=10;
					}
					break;
				}
			}
		}
	}
	printf("%d",answer);
}
//1090090090 5
