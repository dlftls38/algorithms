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
#define MAX_SIZE 100
using namespace std;
double dist(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int root[MAX_SIZE];
int ranks[MAX_SIZE]; // 트리의 높이를 저장할 배열

/* find(x): 재귀 이용 */
int find(int x) { // 동일
	if (root[x] == x) {
      return x;
	  } else {
	      // "경로 압축(Path Compression)"
	      // find 하면서 만난 모든 값의 부모 노드를 root로 만든다.
	      return root[x] = find(root[x]);
	  }
}

/* union1(x, y): union-by-rank 최적화 */
int unions(int x, int y){
   x = find(x);
   y = find(y);
   // 두 값의 root가 같으면(이미 같은 트리) 합치지 않는다.
	if(x == y){
		return -1; 		
	}
	else{
	   // "union-by-rank 최적화"
	   // 항상 높이가 더 낮은 트리를 높이가 높은 트리 밑에 넣는다. 즉, 높이가 더 높은 쪽을 root로 삼음
	   if(ranks[x] < ranks[y]) {
	     root[x] = y; // x의 root를 y로 변경
	   } else {
	     root[y] = x; // y의 root를 x로 변경
	
	     if(ranks[x] == ranks[y])
	       ranks[x]++; // 만약 높이가 같다면 합친 후 (x의 높이 + 1)
	   }
	   return 1;
	}
}
int main(){
	int c;
	scanf("%d",&c);
	while(c--){
		int n;
		scanf("%d",&n);
		double a[100]={0};
		double b[100]={0};
		int i,j;
		for(i=0;i<n;i++){
			scanf("%lf%lf",&a[i],&b[i]);
		}
		priority_queue<pair<double,pair<int,int> > ,vector<pair<double,pair<int,int> > >, greater<pair<double,pair<int,int> > > >d;
		int tail=0;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				d.push(make_pair(dist(a[i],b[i],a[j],b[j]),make_pair(i,j)));

			}
		}
		double ans=0;
		for (int i = 0; i < MAX_SIZE; i++) {
			  root[i] = i;
			  ranks[i] = 0; // 트리의 높이 초기화
			}
		while(!d.empty()){
			if(unions(d.top().second.first,d.top().second.second)==1){
				ans=max(ans,d.top().first);
			}
			d.pop();
		}
		printf("%.2f\n",ans);
	}
}
