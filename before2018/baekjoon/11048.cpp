#include <stdio.h>
#define max(a,b) (a>b?a:b)
int a[1002][1002];
int main(){
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	for(i=1;i<n+1;i++) for(j=1;j<m+1;j++) scanf("%d",&a[i][j]);
	for(i=1;i<n+1;i++) for(j=1;j<m+1;j++) a[i][j]+=max(max(a[i][j-1],a[i-1][j]),a[i-1][j-1]);
	printf("%d",a[n][m]);
}
