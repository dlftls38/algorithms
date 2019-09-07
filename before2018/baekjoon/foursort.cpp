#include <stdio.h>

int main(){
	
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int ii=0;
	int jj=0;
	int kk=0;
	int ll=0;
	scanf("%d",&i);
	scanf("%d",&j);
	scanf("%d",&k);
	scanf("%d",&l);
	

	if(i>j){
		
		ii++;
	}
	
	if(i>k){
		
		ii++;
	}
	
	if(i>l){
		
		ii++;
	}

	if(j>i){
		
		jj++;
	}
	
	if(j>k){
		
		jj++;
	}
	
	if(j>l){
		
		jj++;
	}

	if(k>j){
		
		kk++;
	}
	
	if(k>i){
		
		kk++;
	}
	
	if(k>l){
		
		kk++;
	}

	if(l>j){
		
		ll++;
	}
	
	if(l>k){
		
		ll++;
	}
	
	if(l>i){
		
		ll++;
	}
	
	if(ii==3){
		
		a=i;
	}
	
	if(ii==2){
		
		b=i;
	}
	
	if(ii==1){
		
		c=i;
	}
	
	if(ii==0){
		
		d=i;
	}
	
	if(jj==3){
		
		a=j;
	}
	
	if(jj==2){
		
		b=j;
	}
	
	if(jj==1){
		
		c=j;
	}
	
	if(jj==0){
		
		d=j;
	}
	
	if(kk==3){
		
		a=k;
	}
	
	if(kk==2){
		
		b=k;
	}
	
	if(kk==1){
		
		c=k;
	}
	
	if(kk==0){
		
		d=k;
	}
	
	if(ll==3){
		
		a=l;
	}
	
	if(ll==2){
		
		b=l;
	}
	
	if(ll==1){
		
		c=l;
	}
	
	if(ll==0){
		
		d=l;
	}

	printf("%d %d %d %d",d,c,b,a);
}
