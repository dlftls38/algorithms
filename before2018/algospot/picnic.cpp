#include <stdio.h>
int n,m;
int f(int z[10][10],int x[10]){
	int fir=-1;
	for(int i=0;i<n;i++) if(x[i]==0) {fir=i; break;}
	if(fir==-1) return 1;
	int r=0;
	for(int i=fir+1;i<n;i++){
		if(x[fir]==0 && x[i]==0 && z[fir][i]){
			x[fir]=x[i]=1;
			r+=f(z,x);
			x[fir]=x[i]=0;
		}
	}
	return r;
}
int main(){
	int c,i,q,w;
	scanf("%d",&c);
	while(c--){
		int a[10][10]={0},b[10]={0},k=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++) scanf("%d%d",&q,&w),a[q][w]=1,a[w][q]=1;
		k= f(a,b);
		printf("%d\n",k);
	}
}
