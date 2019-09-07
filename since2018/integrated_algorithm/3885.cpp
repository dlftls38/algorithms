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
using namespace std;
typedef pair<int,int> pii;
int main(){
	while(1){
		int n,w;
		scanf("%d%d",&n,&w);
		if(n==0 && w==0){
			break;
		}
		int height[11]={0};
		int max_height=0;
		int max_width=0;
		int i,j;
		for(i=0;i<n;i++){
			int temp;
			scanf("%d",&temp);
			height[temp/w]++;
			max_height=max(max_height,height[temp/w]);
			max_width=max(max_width,temp/w);
		}
		double ans=0;
		for(i=0;i<max_width;i++){
			ans+=(double)(max_width-i)/(max_width)*height[i]/max_height;
		}
		printf("%.6f\n",ans+0.01);
	}
}
