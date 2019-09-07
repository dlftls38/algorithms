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
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	string a[50];
	for(i=0;i<n;i++){
		char t[51]={0};
		scanf("%s",t);
		a[i]=t;
	}
	int ans=INT_MAX;
	int len=a[0].size();
	for(i=0;i<n;i++){
		string b[50];
		for(j=0;j<n;j++){
			b[j]=a[j];
		}
		int cnt=0;
		for(j=0;j<n;j++){
			int check=0;
			for(k=0;k<len;k++){
				if(a[i].compare(b[j])!=0){
					b[j]+=b[j][0];
					b[j].erase(b[j].begin());
					cnt++;
				}
				else{
					check=1;
					break;
				}
			}
			if(check==0){
				printf("-1");
				return 0;
			}
		}
		ans=min(ans,cnt);
	}
	printf("%d",ans);
}
