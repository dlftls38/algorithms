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
	vector<char>a[5000];
	int n;
	scanf("%d",&n);
	int i,j;
	char temp[2];
	for(i=0;i<n;i++){
		a[i].resize(i);
		for(j=0;j<n;j++){
			char temp[2];
			scanf("%s ",temp);
			if(i>j)
				a[i][j]=temp[0];
		}
	}
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int b,c;
		scanf("%d%d",&b,&c);
		if(b<c)swap(b,c);
		printf("%c\n",a[b][c]);
	}
}
