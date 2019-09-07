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
int ranks[MAX_SIZE]; // Ʈ���� ���̸� ������ �迭

/* find(x): ��� �̿� */
int find(int x) { // ����
	if (root[x] == x) {
      return x;
	  } else {
	      // "��� ����(Path Compression)"
	      // find �ϸ鼭 ���� ��� ���� �θ� ��带 root�� �����.
	      return root[x] = find(root[x]);
	  }
}

/* union1(x, y): union-by-rank ����ȭ */
int unions(int x, int y){
   x = find(x);
   y = find(y);

   // �� ���� root�� ������(�̹� ���� Ʈ��) ��ġ�� �ʴ´�.
	if(x == y){
		return -1; 		
	}
	else{
	   // "union-by-rank ����ȭ"
	   // �׻� ���̰� �� ���� Ʈ���� ���̰� ���� Ʈ�� �ؿ� �ִ´�. ��, ���̰� �� ���� ���� root�� ����
	   if(ranks[x] < ranks[y]) {
	     root[x] = y; // x�� root�� y�� ����
	   } else {
	     root[y] = x; // y�� root�� x�� ����
	
	     if(ranks[x] == ranks[y])
	       ranks[x]++; // ���� ���̰� ���ٸ� ��ģ �� (x�� ���� + 1)
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
	  ranks[i] = 0; // Ʈ���� ���� �ʱ�ȭ
	}
	int ans=0;
	for(i=0;i<e;i++){
		if(unions(ve[i].second.first,ve[i].second.second)==1){
			ans+=ve[i].first;
		}
	}
	printf("%d",ans);
}
