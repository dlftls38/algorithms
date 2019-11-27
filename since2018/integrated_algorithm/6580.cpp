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
char mp[3000][3000]={0};
void solve(int sy,int sx,int ey,int ex){
	int i,j;
	int sum=(ey-sy)*(ex-sx);
	int cnt=0;
	for(i=sy;i<ey;i++){
		for(j=sx;j<ex;j++){
			if(mp[i][j]=='B'){
				cnt++;
			}
		}
	}
	if(cnt==sum){
		printf("B");
	}
	else if(cnt==0){
		printf("W");
	}
	else{
		printf("Q");
		solve(sy,sx,(sy+ey)/2,(sx+ex)/2);
		solve(sy,(sx+ex)/2,(sy+ey)/2,ex);
		solve((sy+ey)/2,sx,ey,(sx+ex)/2);
		solve((sy+ey)/2,(sx+ex)/2,ey,ex);
	}
}
int main(){
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	char tmp[1000]={0};
	strcpy(tmp,a.c_str());
	char *str = strtok(tmp,"#define quadtree_width ");
	int n = atoi(str);
	int i,j,l;
	for(i=0;i<n;i++){
		string input;
		getline(cin,input);
		int len=input.length();
		int cnt=1;
		for(j=2;j<len;j+=5,cnt++){
			int pos=8*cnt-1;
			int k=0;
			if(input[j]>='a'){
				k+=input[j]-'a'+10;
			}
			else{
				k+=input[j]-'0';
			}
			int kk=0;
			if(input[j+1]>='a'){
				kk+=input[j+1]-'a'+10;
			}
			else{
				kk+=input[j+1]-'0';
			}
			for(l=8;l>=1;l/=2){
				if(k>=l){
					k-=l;
					mp[i][pos--]='B';
				}
				else{
					mp[i][pos--]='W';
				}
			}
			for(l=8;l>=1;l/=2){
				if(kk>=l){
					kk-=l;
					mp[i][pos--]='B';
				}
				else{
					mp[i][pos--]='W';
				}
			}
		}
	}
	string d;
	getline(cin,d);
	printf("%d\n",n);
	solve(0,0,n,n);
}
