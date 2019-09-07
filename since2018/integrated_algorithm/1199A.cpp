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
using namespace std;
int a[100000];
int main(){
	int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		int check=0;
		for(j=i-1;j>i-1-x && j>=0;j--){
			if(a[i]>=a[j]){
				check=1;
			}
		}
		for(j=i+1;j<y+i+1 && j<n;j++){
			if(a[i]>=a[j]){
				check=1;
			}
		}
		if(check==0){
			printf("%d",i+1);
			return 0;
		}
	}
}
