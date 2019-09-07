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
	queue<int>q;
	for(i=1;i<=n;i++){
		q.push(i);
	}
	while(q.size()>1){
		printf("%d ",q.front());
		q.pop();
		q.push(q.front());
		q.pop();
	}
	printf("%d",q.front());
}
