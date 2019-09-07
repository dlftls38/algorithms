#include <stdio.h>
#include <string.h>
int b,i,max;
long long dap,ww[10000];
int qq[10000],check[10000],lenlen[10000],head,tail;
void d(int q,long long w,int len);
void s(int q,long long w,int len);
void l(int q,long long w,int len);
void r(int q,long long w,int len);
void d(int q,long long w,int len){
 	q=(q*2)%10000;
	w*=10;
	w+=1;
	len++;
	if(q==b){
		max=len;
		dap=w;
		return;
	}
	if(check[q]==0){
		qq[tail]=q;
		ww[tail]=w;
		lenlen[tail++]=len;
		check[q]=1;
	}
}
void s(int q,long long w,int len){
	q=(9999+q)%10000;
	w*=10;
	w+=2;
	len++;
	if(q==b){
		max=len;
		dap=w;
		return;
	}
	if(check[q]==0){
		qq[tail]=q;
		ww[tail]=w;
		check[q]=1;
		lenlen[tail++]=len;
	}
}
void l(int q,long long w,int len){
	q=(q*10+q/1000)%10000;
	w*=10;
	w+=3;
	len++;
	if(q==b){
		dap=w;
		max=len;
		return;
	}
	if(check[q]==0){
		qq[tail]=q;
		ww[tail]=w;
		lenlen[tail++]=len;
		check[q]=1;
	}
}
void r(int q,long long w,int len){
	q=(q+(q%10)*10000)/10;
	w*=10;
	w+=4;
	len++;
	if(q==b){
		max=len;
		dap=w;
		return;
	}
	if(check[q]==0){
		qq[tail]=q;
		ww[tail]=w;
		check[q]=1;
		lenlen[tail++]=len;
	}
}
int main(){
	int t,a;
	scanf("%d",&t);
	while(t--){
		long long uu=1;
		scanf("%d%d",&a,&b);
		qq[tail]=a;
		ww[tail]=0;
		lenlen[tail++]=0;
		check[a]=1;
		while(1){
			d(qq[head],ww[head],lenlen[head]);
			s(qq[head],ww[head],lenlen[head]);
			l(qq[head],ww[head],lenlen[head]);
			r(qq[head],ww[head],lenlen[head]);
			head++;
			if(dap>0){
				break;
			}
		}
		for(i=0;i<max-1;i++){
			uu*=10;
		}
		for(i=0;i<max;i++){
			if(dap/uu==1)printf("D");
			if(dap/uu==2)printf("S");
			if(dap/uu==3)printf("L");
			if(dap/uu==4)printf("R");
			dap%=uu;
			uu/=10;
		}
		printf("\n");
		for(i=0;i<10000;i++){
			check[i]=0;
			qq[i]=0;
			ww[i]=0;
			lenlen[i]=0;
		}
		max=0;
		dap=0;
		head=0;
		tail=0;
	}
}
