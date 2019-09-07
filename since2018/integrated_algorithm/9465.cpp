#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int i,j,k;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a[2][100000]={0};
		for(j=0;j<2;j++){
			for(k=0;k<n;k++){
				scanf("%d",&a[j][k]);
			}
		}
		for(j=1;j<n;j++){
			if(j>1){
				a[0][j]+=max(a[0][j-2],max(a[1][j-2],a[1][j-1]));
				a[1][j]+=max(a[1][j-2],max(a[0][j-2],a[0][j-1]));
			}
			else{
				a[0][j]+=a[1][j-1];
				a[1][j]+=a[0][j-1];		
			}
		}
		printf("%d\n",max(a[0][n-1],a[1][n-1]));
	}
}
