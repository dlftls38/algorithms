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
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		int i,j;
		int a[26]={0};
		int check=-1;
		int max_cnt=0;
		char ans;
		for(i=0;i<n;i++){
			string temp;
			cin>>temp;
			a[temp[0]-65]++;
			if(max_cnt<a[temp[0]-65]){
				max_cnt=a[temp[0]-65];
				ans=temp[0];
			}
			int cnt=0;
			for(j=0;j<26;j++){
				if(n-i-1+a[j]>=max_cnt){
					cnt++;
				}
			}
			if(cnt==1 && check==-1){
				check=i+1;
			}
		}
		if(check==-1){
			printf("TIE\n");
		}
		else{
			printf("%c %d\n",ans,check);
		}
	}
}
