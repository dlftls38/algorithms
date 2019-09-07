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
int a[100001];
int psum[100001];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		psum[i]=a[i]+psum[i-1];
	}
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		printf("%d\n",psum[w]-psum[q-1]);
	}
}
