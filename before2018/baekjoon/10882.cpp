#include <stdio.h>
#include <string.h>
int main(){
	int i,a,b,c,n,e,f,g,h,d,o=0,oo=0;
	char q[10]={0},w[10]={0},input[10]={0};
	scanf("%d%s%s",&n,q,w);
	a=(q[0]-48)*10+q[1]-48;
	b=(q[3]-48)*10+q[4]-48;
	if(strlen(w)==5 || strlen(w)==7){
		
		if(w[3]==45){
			
			c=-(w[4]-48);
		}
		else{
			
			c=(w[4]-48);
		}
	}
	else{
		
		if(w[3]==45){
			
			c=-((w[4]-48)*10+w[5]-48);
		}
		else{
			
			c=(w[4]-48)*10+w[5]-48;
		}		
	}
	c*=60;
	if(strlen(w)==7){
		
		if(w[3]==45){
			
			c-=6*(w[6]-48);
		}
		else{
			
			c+=6*(w[6]-48);
		}
	}
	else if(strlen(w)==8){
		
		if(w[3]==45){
			
			c-=6*(w[7]-48);
		}
		else{
			
			c+=6*(w[7]-48);
		}
	}
	for(i=0;i<n;i++){
		
		scanf("%s",input);
		e=a*60;
		e+=b;
		f=b;
		d=c;
		o=0;
		oo=0;
		if(strlen(input)==5 || strlen(input)==7){
			
			if(input[3]==45){
				
				g=-(input[4]-48);
			}
			else{
				
				g=(input[4]-48);
			}
		}
		else{
			
			if(input[3]==45){
				
				g=-((input[4]-48)*10+input[5]-48);
			}
			else{
				
				g=(input[4]-48)*10+input[5]-48;
			}		
		}
		g*=60;
		if(strlen(input)==7){
			
			if(input[3]==45){
				
				g-=6*(input[6]-48);
			}
			else{
				
				g+=6*(input[6]-48);
			}
		}
		else if(strlen(input)==8){
			
			if(input[3]==45){
				
				g-=6*(input[7]-48);
			}
			else{
				
				g+=6*(input[7]-48);
			}
		}
		else{
			
		}
		e-=d-g;
		while(e<0){
			
			e+=1440;
		}
		while(e>=1440){
			
			e-=1440;
		}
		while(e>=6){
			
			e-=6;
			o+=6;
			if(o==60){
				
				o-=60;
				oo+=1;
			}
		}
		if(e>0){
			
			o+=e;
		}
		while(oo>=24){
			
			oo-=24;
		}
		while(oo<0){
			
			oo+=24;
		}
		if(oo<10 && o>9){
			
			printf("0%d:%d\n",oo,o);
		}
		else if(oo<10 && o<10){
			
			printf("0%d:0%d\n",oo,o);
		}
		else if(oo>9 && o>9){
			
			printf("%d:%d\n",oo,o);
		}
		else if(oo>9 && o<10){
			
			printf("%d:0%d\n",oo,o);
		}
		
	}
	
}
