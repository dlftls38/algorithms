#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int a[100000];
int main(){
	int n,s;
	scanf("%d%d",&n,&s);
	int i,j;
	int head=0,tail=1;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		a[i]+=a[i-1];
	}
	int ans=INT_MAX;
	while(head<n){
		if(a[tail]-a[head]>=s || tail==n){
			if(a[tail]-a[head]>=s){
				ans=min(ans,tail-head);	
			}
			head++;
		}
		else{
			tail++;
		}
	}
	if(ans==INT_MAX)
		printf("0");
	else
		printf("%d",ans);
}
