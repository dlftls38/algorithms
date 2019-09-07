#include <stdio.h>
#include <string.h>

int main(){
	
	int t,i,j,count=0,len,real,q=0,qq=0,w=1,last=0,temp=0,sum=0;
	char n[10]={0};
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%s",n);
		real = strlen(n);
		len=strlen(n)/2;
		for(j=0;j<real;j++){
			
			q += (n[j]-48)*w;
			qq += (n[real-1 -j]-48)*w;
			w *= 10;
		}
		last = q+qq;
		temp=last;
		while(temp>0){
			sum*=10;
			sum+=temp%10;
			temp/=10;
		}
		if(sum==last){
			
			printf("YES\n");
		}
		else{
			
			printf("NO\n");
		}
		memset(n,0,sizeof(n));
		sum=0;
		q=0;
		qq=0;
		w=1;
	}
}
