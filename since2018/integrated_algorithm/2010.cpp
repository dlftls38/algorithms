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
	int n;
	scanf("%d",&n);
	int i,j;
	int ans=0;
	for(i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		ans+=temp-1;
	}
	printf("%d",ans+1);
}
