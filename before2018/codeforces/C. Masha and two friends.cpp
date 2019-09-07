#include <stdio.h>
long long min(long long a,long long b){
	if(b<a){
		return b;
	}
	else{
		return a;
	}
}
long long max(long long a,long long b){
	if(a<b){
		return b;
	}
	else{
		return a;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long long n,m;
		scanf("%lld%lld",&n,&m);
		long long q,w,e,r;
		long long qq,ww,ee,rr;
		long long wh,b;
		scanf("%lld%lld%lld%lld",&q,&w,&e,&r);
		scanf("%lld%lld%lld%lld",&qq,&ww,&ee,&rr);
		if(m==1 || n==1){
			wh=m*n/2+m*n%2;
			b=m*n/2;
		}
		else{
			wh=m*n/2;
			b=m*n/2;
			if(m%2==1 && n%2==1){
				wh++;
			}
		}
		if(e-q==0){
			if((q+w)%2==1){
				b-=(r-w+1)/2;
				wh+=(r-w+1)/2;
				if((r-w)%2==0){
					b--;
					wh++;
				}
			}
			else{
				b-=(r-w+1)/2;
				wh+=(r-w+1)/2;
			}
		}
		else if(r-w==0){
			if((q+w)%2==1){
				b-=(e-q+1)/2;
				wh+=(e-q+1)/2;
				if((e-q)%2==0){
					b--;
					wh++;
				}
			}
			else{
				b-=(e-q+1)/2;
				wh+=(e-q+1)/2;
			}
		}
		else{
			if((e-q+1)%2==1 && (r-w+1)%2==1){
				if((q+w)%2==1){
					wh++;
				}
			}
			b-=(e-q+1)*(r-w+1)/2;
			wh+=(e-q+1)*(r-w+1)/2;
		}
		//printf("%lld %lld\n",wh,b);
		long long sw=0;
		if(ee-qq==0){
			if((qq+ww)%2==1){
				sw+=(rr-ww+1)/2;
			}
			else{
				sw+=(rr-ww+1)/2;
				if((rr-ww)%2==0){
					sw++;
				}
			}
		}
		else if(rr-ww==0){
			if((qq+ww)%2==1){
				sw+=(ee-qq+1)/2;
			}
			else{
				sw+=(ee-qq+1)/2;
				if((ee-qq)%2==0){
					sw++;
				}
			}
		}
		else{
			if((ee-qq+1)%2==1 && (rr-ww+1)%2==1){
				if((qq+ww)%2==0){
					sw++;
				}
			}
			sw+=(ee-qq+1)*(rr-ww+1)/2;
		}
		//printf("! %d !\n",sw);
		long long qqq=max(q,qq);
		long long www=max(w,ww);
		long long eee=min(e,ee);
		long long rrr=min(r,rr);
		long long was=0;
		if(qqq<=eee && www<=rrr){
			if(eee-qqq==0){
				if((qqq+www)%2==1){
					was+=(rrr-www+1)/2;
					if((rrr-www)%2==0){
						was++;
					}
				}
				else{
					was+=(rrr-www+1)/2;
				}
			}
			else if(rrr-www==0){
				if((qqq+www)%2==1){
					was+=(eee-qqq+1)/2;
					if((rrr-www)%2==0){
						was++;
					}
				}
				else{
					was+=(eee-qqq+1)/2;
				}
			}
			else{
				if((eee-qqq+1)%2==1 && (rrr-www+1)%2==1){
					if((qqq+www)%2==1){
						was++;
					}
				}
				was+=(eee-qqq+1)*(rrr-www+1)/2;
			}	
		}
		b+=sw+was;
		wh-=sw+was;
		//printf("@ %d @\n",was);
		printf("%lld %lld\n",wh,b);
	}
}
//1000000000 1000000000
//100000000 100000000 200000500 200000934
//1 1000000000 1000000000 1000000000
//505000071300234217 494999928699765783

