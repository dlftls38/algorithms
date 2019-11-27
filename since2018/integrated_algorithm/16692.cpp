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
	int n,c;
	cin>>n>>c;
	int i,j;
	int a[1001]={0};
	for(i=0;i<c;i++){
		int t;
		cin>>t;
		int min_val=INF;
		for(j=0;j<n;j++){
			min_val=min(min_val,a[j]);
			if(a[j]==0){
				printf("%d ",j+1);
				a[j]=t;
				break;
			}
		}
		if(min_val!=0){
			int check=0;
			for(j=0;j<n;j++){
				a[j]-=min_val;
				if(a[j]==0 && check==0){
					a[j]=t;
					check=1;
					printf("%d ",j+1);
				}
			}
		}
	}
}
