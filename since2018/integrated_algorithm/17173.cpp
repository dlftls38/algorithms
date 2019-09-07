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
int a[1000];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int ans=0;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=0;j<m;j++){
			if(i%a[j]==0){
				ans+=i;
				break;
			}
		}
	}
	printf("%d",ans);
}
