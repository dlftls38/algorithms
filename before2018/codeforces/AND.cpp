#include <stdio.h>
int main(){
	int n,x;
	int b[100001]={0};
	int c[100001]={0};
	scanf("%d%d",&n,&x);
	for(int i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		c[k]++;
		b[k&x]++;
	}
	int answer=-1;
	for(int i=0;i<100001;i++){
		if(c[i]>=2){
			answer=0;
			break;
		}
		else if(c[i]==1 && (i&x)!=i && c[i&x]==1){
			if(answer==2 || answer==-1) answer=1;
		}
		else if(b[i]>=2){
			if(answer==-1) answer=2;
		}
	}
	printf("%d",answer);
}
