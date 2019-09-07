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
	queue<int>q;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	for(int i=0;i<n-1;i++){
		q.pop();
		int x=q.front();
		q.pop();
		q.push(x);
	}
	printf("%d",q.front());
}
