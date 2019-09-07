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
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int ans1=0;
	int ans2=0;
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		ans1=max(ans1,temp);
	}
	for(i=0;i<m;i++){
		int temp;
		scanf("%d",&temp);
		ans2=max(ans2,temp);
	}
	printf("%d",ans1+ans2);
}
