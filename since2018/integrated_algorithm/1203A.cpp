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
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		int a[200]={0};
		int i,j;
		int pos;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]==1){
				pos=i;
			}
		}
		int check1=0;
		int cur1=1;
		for(i=pos+1;i<n;i++){
			if(a[i]==cur1+1){
				cur1++;
			}
			else{
				check1=1;
			}
		}
		for(i=0;i<pos;i++){
			if(a[i]==cur1+1){
				cur1++;
			}
			else{
				check1=1;
			}
		}
		int check2=0;
		int cur2=1;
		for(i=pos-1;i>=0;i--){
			if(a[i]==cur2+1){
				cur2++;
			}
			else{
				check2=1;
			}
		}
		for(i=n-1;i>pos;i--){
			if(a[i]==cur2+1){
				cur2++;
			}
			else{
				check2=1;
			}
		}
		if(check1==0 || check2==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
