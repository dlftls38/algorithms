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
	string s;
	cin>>s;
	int len=s.length();
	int i,j;
	char a[5][301]={0};
	for(i=0;i<5;i++){
		for(j=0;j<300;j++){
			a[i][j]='.';
		}
	}
	for(i=0;i<len;i++){
		int y=2;
		int x=i*4+2;
		a[y][x]=s[i];
		if((i+1)%3==0){
			a[y+2][x]='*';
			a[y-2][x]='*';
			a[y][x+2]='*';
			a[y][x-2]='*';
			a[y+1][x+1]='*';
			a[y+1][x-1]='*';
			a[y-1][x+1]='*';
			a[y-1][x-1]='*';
		}
		else{
			a[y+2][x]='#';
			a[y-2][x]='#';
			a[y][x+2]='#';
			if(a[y][x-2]=='.')
				a[y][x-2]='#';
			a[y+1][x+1]='#';
			a[y+1][x-1]='#';
			a[y-1][x+1]='#';
			a[y-1][x-1]='#';
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<len*4+1;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
