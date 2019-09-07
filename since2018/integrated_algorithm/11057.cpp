#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	int answer=0;
	int a[10]={0};
	for(i=0;i<10;i++){
		a[i]++;
	}
	for(i=1;i<n;i++){
		int b[10]={0};
		for(j=0;j<10;j++){
			for(k=j;k<10;k++){
				b[k]+=a[j];
				b[k]%=10007;
			}
		}
		for(j=0;j<10;j++){
			a[j]=b[j];
		}
	}
	for(i=0;i<10;i++){
		answer+=a[i];
		answer%=10007;
	}
	printf("%d",answer);
}
