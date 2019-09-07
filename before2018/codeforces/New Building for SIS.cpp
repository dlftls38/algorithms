#include <stdio.h>
long long n,h,a,b,k;
long long abs(long long a,long long b){
	if(a-b<0){
		return b-a;
	}
	else{
		return a-b;
	}
}
void recur(long long q,long long w,long long e,long long r,long long answer){
	if(q==e){
		answer+=abs(w,r);
		w=r;
	}
	else{
		if(w<a || w>b){
			if(abs(w,a)>abs(w,b)){
				answer+=abs(w,b);
				w=b;
			}
			else{
				answer+=abs(w,a);
				w=a;
			}
		}
		answer+=abs(q,e);
		q=e;
	}
	if(q==e && w==r){
		printf("%lld\n",answer);
	}
	else{
		recur(q,w,e,r,answer);
	}
}
int main(){
	scanf("%lld%lld%lld%lld%lld",&n,&h,&a,&b,&k);
	int i;
	for(i=0;i<k;i++){
		long long q,w,e,r;
		scanf("%lld%lld%lld%lld",&q,&w,&e,&r);
		recur(q,w,e,r,0);
	}
}
