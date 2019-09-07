#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	long long a[3]={0};
	scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
	long long answer=0;
	while(1){
		sort(a,a+3);
		//printf("%d %d %d    %d   %d\n",a[0],a[1],a[2],a[0]+a[1]+a[2],answer);
		if(a[1]==1){
			if(a[2]>1){
				answer++;
				a[1]--;
				a[2]-=2;
				continue;
			}
		}
		if(a[1]==0 || a[2]==1){
			break;
		}
		if(a[1]>3){
			answer+=a[1]/4;
			a[2]-=a[1]/4*2;
			a[1]-=a[1]/4;
		}
		else{
			answer+=a[1]/2;
			a[2]-=a[1]/2*2;
			a[1]-=a[1]/2;
		}
	}
	if(a[0]==1 && a[1] == 1 && a[2]==1){
		answer++;
	}
	printf("%lld",answer);
}
