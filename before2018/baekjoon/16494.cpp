#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[20]={0};
	int i,j;
	int b[20]={0};
	int c[20]={0};
	int count[20]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
		c[i]++;
	}
	for(i=0;i<n-1;i++){
		if(b[i]>=0){
			b[i+1]+=b[i];
			c[i+1]=c[i]+1;
		}
	}
	int answer=0;
	int book=0;
	for(j=0;j<m;j++){
		int most=-3000;
		int position=0;
		for(i=0;i<n;i++){
			if(b[i]>=most && count[i]==0){
				most=b[i];
				position=i;
			}
		}
		int q[20]={0};
		int w[20]={0};
		for(i=0;i<n;i++){
			if(count[i]==1){
				q[i]=a[i];
				w[i]=1;
			}
		}
		for(i=0;i<n-1;i++){
			if(q[i]+q[i+1]<q[i+1]){
				q[i+1]+=q[i];
				w[i+1]=w[i]+1;
			}
		}
		int least=0;
		int p2=-1;
		for(i=0;i<n;i++){
			if(least>q[i]){
				least=q[i];
				p2=i;
			}
		}
		least=-least;
		if(p2!=-1 && most<least){
			answer+=least;
			book-=w[p2];
			for(i=p2;i>-1;i--){
				count[i]=0;
				if(w[i]==1){
					break;
				}
			}
		}
		else if(most<0 && book>=m){
			break;
		}
		else{
			answer+=most;
			book+=c[position];
			for(i=position;i>-1;i--){
				count[i]=1;
				if(c[i]==1){
					break;
				}
			}
		}
		for(i=0;i<n;i++){
			if(count[i]==0){
				b[i]=a[i];
				c[i]=1;	
			}
		}
		for(i=0;i<n-1;i++){
			if(count[i]==0 && count[i+1]==0 && b[i]+b[i+1]>b[i+1]){
				b[i+1]+=b[i];
				c[i+1]=c[i]+1;
			}
		}
//		for(i=0;i<n;i++){
//			printf("%d ",b[i]);
//		}
//		printf("\n");
//		for(i=0;i<n;i++){
//			printf("%d ",count[i]);
//		}
//		printf("\n");
//		printf("%d\n",answer);
	}
	printf("%d",answer);
}
