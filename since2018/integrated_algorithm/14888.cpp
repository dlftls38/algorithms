#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[11]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int c[4]={0};
	int b[10]={0};
	int tail=0;
	for(i=0;i<4;i++){
		scanf("%d",&c[i]);
		for(j=0;j<c[i];j++){
			if(i==0)
				b[tail++]='+';
			else if(i==1)
				b[tail++]='-';
			else if(i==2)
				b[tail++]='*';
			else
				b[tail++]='/';
		}
	}
	int count=1;
	for(i=2;i<n;i++){
		count*=i;
	}
	int ans_max=-INT_MAX;
	int ans_min=INT_MAX;
	for(i=0;i<count;i++){
		int sum=a[0];
		for(j=0;j<n-1;j++){
			if(b[j]=='+'){
				sum+=a[j+1];
			}
			else if(b[j]=='-'){
				sum-=a[j+1];
			}
			else if(b[j]=='*'){
				sum*=a[j+1];
			}
			else{
				sum/=a[j+1];
			}
		}
		ans_max=max(ans_max,sum);
		ans_min=min(ans_min,sum);
		next_permutation(b,b+n-1);
	}
	printf("%d %d",ans_max,ans_min);
}
