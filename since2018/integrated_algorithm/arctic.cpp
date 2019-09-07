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
			  ranks[i] = 0; // Ʈ���� ���� �ʱ�ȭ
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
