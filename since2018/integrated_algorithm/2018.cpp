#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int ans=0;
	int s=1,e=1;
	int sum=0;
	while(s<n+1){
		if(e==n+1 || sum>=n){
			sum-=s++;
		}
		else{
			sum+=e++;
		}
		if(sum==n){
			ans++;
		}
	}
	printf("%d",ans);
}
