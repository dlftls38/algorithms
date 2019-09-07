#include <stdio.h>
int main(){
	long long q[30]={0};
	char w[40]={0};
	int tail=0;
	int n;
	scanf("%d",&n);
	long long x=50000000;
	long long sx=0;
	long long lx=100000000;
	for(int i=0;i<n;i++){
		char color[10]={0};
		printf("%lld 1\n",x);
		fflush(stdout);
		scanf("%s",color);
		q[tail]=x;
		w[tail++]=color[0];
		if(color[0]=='b'){
			lx=x;
			x=(x+sx)/2;
		}
		else{
			sx=x;
			x=(x+lx)/2;
		}
	}
	long long o=100000000,p=-1;
	for(int i=0;i<tail;i++){
		if(w[i]=='w' && p<q[i]){
			p=q[i];
		}
		if(w[i]=='b' && o>q[i]){
			o=q[i];
		}
	}
	if(o==-1 || p==-1){
		printf("0 3 1 3");
	}
	else{
		printf("%lld 2 %lld 0",(o+p)/2,(o+p)/2);
	}
}
