#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int c[1001]={0};
	int a[1001]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	int answer=0;
	for(i=0,j=0;i<m && j<n;j++){
		if(a[i]>=c[j]){
			answer++;
			i++;
		}
	}
	printf("%d",answer);
}
