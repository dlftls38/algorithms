#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#define MAX_SIZE 10001
using namespace std;
vector <pair<int,pair<int,int> > >ve;
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
	int v,e;
	scanf("%d%d",&v,&e);
	int i,j;
	for(i=0;i<e;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		ve.push_back(make_pair(c,make_pair(a,b)));
	}
	sort(ve.begin(),ve.end());
	for (int i = 0; i < MAX_SIZE; i++) {
	  root[i] = i;
	  ranks[i] = 0; // 트리의 높이 초기화
	}
	int ans=0;
	for(i=0;i<e;i++){
		if(unions(ve[i].second.first,ve[i].second.second)==1){
			ans+=ve[i].first;
		}
	}
	printf("%d",ans);
}
