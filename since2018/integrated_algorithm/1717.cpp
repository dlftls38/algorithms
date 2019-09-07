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
#define MAX_SIZE 1000001
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
int main(){
	for (int i = 0; i < MAX_SIZE; i++) {
	  root[i] = i;
	  ranks[i] = 0; // Ʈ���� ���� �ʱ�ȭ
	}
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int q,a,b;
		scanf("%d%d%d",&q,&a,&b);
		if(q==0){
			unions(a,b);
		}
		else{
			if(find(a)==find(b)){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
}
