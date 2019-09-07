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
	int i,j,k,l;
	int a[100]={0};
	int m;
	int b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			int check=0;
			for(k=0;k<n;k++){
				if(a[k]==a[i]+b[j]){
					check++;
				}
			}
			for(k=0;k<m;k++){
				if(b[k]==a[i]+b[j]){
					check++;
				}
			}
			if(check==0){
				printf("%d %d",a[i],b[j]);
				return 0;
			}
		}
	}
}
