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
	int n;
	scanf("%d",&n);
	int a[100];
	int check[100]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int ans=0;
	for(i=0;i<n;i++){
		if(check[i]==0){
			ans++;
			for(j=i;j<n;j++){
				if(check[j]==0 && a[j]%a[i]==0){
					check[j]=1;
				}
			}
		}
	}
	printf("%d",ans);
}
