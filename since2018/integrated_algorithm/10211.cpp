#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n;
		scanf("%d",&n);
		int i,j;
		int a[1000]={0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			
		}
		int answer=a[0];
		for(i=1;i<n;i++){
			if(a[i-1]>0){
				a[i]+=a[i-1];
			}
			if(answer<a[i]){
				answer=a[i];
			}
		}
		printf("%d\n",answer);
	}
}
