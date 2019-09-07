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
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	queue<int>q;
	for(i=1;i<=n;i++){
		q.push(i);
	}
	printf("<");
	while(1){
		for(i=1;i<k;i++){
			q.push(q.front());
			q.pop();
		}
		if(q.size()==1){
			printf("%d>",q.front());
			break;
		}
		printf("%d, ",q.front());
		q.pop();
	}
}
