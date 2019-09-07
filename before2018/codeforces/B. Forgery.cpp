#include <stdio.h>
int a[1001][1001];
int b[1001][1001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		char q[1001]={0};
		scanf("%s",q);
		for(int j=0;j<m;j++){
			if(q[j]=='#'){
				a[i][j]=1;	
			}
		}
	}
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			if(a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]==8){
				b[i-1][j-1]=1;
				b[i-1][j]=1;
				b[i-1][j+1]=1;
				b[i][j-1]=1;
				b[i][j+1]=1;
				b[i+1][j-1]=1;
				b[i+1][j]=1;
				b[i+1][j+1]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]!=b[i][j]){
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
}
