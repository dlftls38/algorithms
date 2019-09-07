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
	int i,j;
	int c=0;
	int ans=0;
	for(i=0;i<4;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		c-=a;
		c+=b;
		ans=max(ans,c);
	}
	printf("%d",ans);
}
