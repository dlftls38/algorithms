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
#define MAX_SIZE 501
using namespace std;
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
int check[501]={0};
vector<int>v[501];
int q,w;
int ans;
void dfs(int cur){
	q++;
	int size=v[cur].size();
	int i,j;
	w+=size;
	for(i=0;i<size;i++){
		if(check[v[cur][i]]==0){
			check[v[cur][i]]=1;
			dfs(v[cur][i]);
		}
	}
}
int main(){
	int c=0;
	while(1){
		c++;
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		int i,j,k;
		for(i=0;i<n+1;i++){
			v[i].clear();
			check[i]=0;
		}
		for (int i = 0; i < MAX_SIZE; i++) {
		  root[i] = i;
		  ranks[i] = 0; // Ʈ���� ���� �ʱ�ȭ
		}
		ans=0;
		for(i=0;i<m;i++){
			int a,b;
			scanf("%d%d",&a,&b);
			v[a].push_back(b);
			v[b].push_back(a);
//			if(unions(a,b)==-1){
//				ans--;
//			}
		}
		for(i=1;i<=n;i++){
			if(check[i]==0){
				check[i]=1;
				q=0;
				w=0;
				dfs(i);
				if((q-1)*2==w){
					ans++;
				}
			}
		}
		if(ans==0){
			printf("Case %d: No trees.\n",c);
		}
		else if(ans==1){
			printf("Case %d: There is one tree.\n",c);
		}
		else{
			printf("Case %d: A forest of %d trees.\n",c,ans);
		}
	}
}
