#include <stdio.h>
long long com(int x,int y){
	if(y==0){
		
		return 1;
	}
	else{
		
		return x*com(x-1,y-1)/y;
	}
}

int main(){
	
	int i,j,n,m,k,a,b,c,d,hhh=0,q=0;
	scanf("%d%d%d",&n,&m,&k);
	
	if(k==0){
		
		if(m>n){
			printf("%lld",com(n+m-2,n-1));
		}
		else{
			printf("%lld",com(n+m-2,m-1));
		}
	}
	else{
		
		for(i=0;i<n;i++){
			
			for(j=0;j<m;j++){
				q++;
				if(q==k){
					
					hhh=1;
					a=i;
					b=j;
					break;
				}
			}
			if(hhh==1){
				
				break;
			}
		}
		c=n-a-1;
		d=m-b-1;
		a+=b;
		c+=d;
		if(a-b<b){
			b=a-b;
		}
		if(c-d<d){
			d=c-d;
		}
		printf("%lld",com(a,b)*com(c,d));
	}
}
