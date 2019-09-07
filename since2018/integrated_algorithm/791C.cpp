#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
vector<string>v;
vector<string>yn;
int ans[100];
int tail;
int c;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	char q[3]="Aa";
	for(i=0;i<26;i++){
		string w=q;
		v.push_back(q);
		q[1]++;
	}
	char e[3]="Ba";
	for(i=0;i<26;i++){
		string w=e;
		v.push_back(e);
		e[1]++;
	}
	for(i=0;i<n-k+1;i++){
		char a[4]={0};
		scanf("%s",a);
		yn.push_back(a);
	}
	for(i=0;i<k-1;i++){
		ans[i]=i;
	}
	for(i=k-1;i<n;i++){
		if(yn[i-k+1].compare("NO")==0){
			ans[i]=ans[i-k+1];
		}
		else{
			ans[i]=i;
		}
	}
	for(i=0;i<n;i++){
		printf("%s ",v[ans[i]].c_str());
	}
}
