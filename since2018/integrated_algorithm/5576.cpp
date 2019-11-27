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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int i;
	priority_queue<int>pq_w;
	for(i=0;i<10;i++){
		int score_w;
		scanf("%d",&score_w);
		pq_w.push(score_w);
	}
	priority_queue<int>pq_k;
	for(i=0;i<10;i++){
		int score_k;
		scanf("%d",&score_k);
		pq_k.push(score_k);
	}
	int w=0;
	w+=pq_w.top();
	pq_w.pop();
	w+=pq_w.top();
	pq_w.pop();
	w+=pq_w.top();
	int k=0;
	k+=pq_k.top();
	pq_k.pop();
	k+=pq_k.top();
	pq_k.pop();
	k+=pq_k.top();
	printf("%d %d",w,k);
}
