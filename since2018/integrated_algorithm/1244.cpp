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
	int a[101];
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int sex,number;
		scanf("%d%d",&sex,&number);
		if(sex==1){
			for(j=number;j<=n;j+=number){
				a[j] = (a[j]+1)%2;
			}
		}
		else{
			for(j=0;number-j>=1 && number+j<=n;j++){
				if(a[number-j]==a[number+j]){
					a[number-j] = (a[number-j]+1)%2;
					if(j!=0)
						a[number+j] = (a[number+j]+1)%2;
				}
				else{
					break;
				}
			}
		}
	}
	int cnt=0;
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
		cnt++;
		if(cnt%20==0){
			printf("\n");
		}
	}
}
