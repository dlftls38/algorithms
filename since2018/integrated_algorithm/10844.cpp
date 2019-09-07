#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long a[10]={0};
	int i,j;
	for(i=1;i<10;i++){
		a[i]++;
	}
	for(i=1;i<n;i++){
		long long b[10]={0};
		for(j=0;j<10;j++){
			if(j==0){
				b[j+1]+=a[j];
				b[j+1]%=1000000000;
			}
			else if(j==9){
				b[j-1]+=a[j];
				b[j-1]%=1000000000;
			}
			else{
				b[j+1]+=a[j];
				b[j-1]+=a[j];
				b[j+1]%=1000000000;
				b[j-1]%=1000000000;
			}
		}
		for(j=0;j<10;j++){
			a[j]=b[j];
		}
	}
	long long answer=0;
	for(i=0;i<10;i++){
		answer+=a[i];
		answer%=1000000000;
	}
	printf("%lld",answer);
}
