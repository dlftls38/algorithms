#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int i;
	int count=0;
	while(1){
		for(i=316;i>-1;i--){
			if(i*i<=n){
				n-=i*i;
				count++;
				break;
			}
		}
		if(n==0){
			break;
		}
	}
	printf("%d",count);
}
