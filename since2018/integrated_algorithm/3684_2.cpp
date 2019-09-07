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
#define MOD 10001
using namespace std;
typedef pair<int,int> pii;
int main(){
	int a[100];
	int ans[100];
	int tc;
	scanf("%d",&tc);
	int i,j,k;
	for(i=0;i<tc;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=10000;i++){
		for(j=0;j<=10000;j++){
			int temp = a[0];
			temp = (temp*i+j)%MOD;
			int check=0;
			int cnt=0;
			ans[cnt++]=temp;
			for(k=1;k<tc;k++){
				if((temp*i+j)%MOD==a[k]){
					temp = (a[k]*i+j)%MOD;
					ans[cnt++]=temp;
				}
				else{
					check=1;
					break;
				}
			}
			if(check==0){
				for(k=0;k<cnt;k++){
					printf("%d\n",ans[k]);
				}
				return 0;
			}
		}
	}
}
