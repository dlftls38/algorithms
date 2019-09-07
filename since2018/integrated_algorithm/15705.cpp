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
	int n,m;
	scanf("%d%d",&n,&m);
	char a[100][101]={0};
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int len=s.length();
	int temp;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			temp=0;
			for(k=0;k<len;k++){
				if(j+k<m && a[i][j+k]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
			temp=0;
			for(k=0;k<len;k++){
				if(i+k<n && j+k<m && a[i+k][j+k]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
			temp=0;
			for(k=0;k<len;k++){
				if(i+k<n && a[i+k][j]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
			temp=0;
			for(k=0;k<len;k++){
				if(i+k<n && j-k>=0 && a[i+k][j-k]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
			temp=0;
			for(k=0;k<len;k++){
				if(j-k>=0 && a[i][j-k]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
			temp=0;
			for(k=0;k<len;k++){
				if(i-k>=0 && j-k>=0 && a[i-k][j-k]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
			temp=0;
			for(k=0;k<len;k++){
				if(i-k>=0 && a[i-k][j]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
			temp=0;
			for(k=0;k<len;k++){
				if(i-k<n && j+k>=0 && a[i-k][j+k]==s[k])temp++;
			}
			if(temp==len){
				printf("1");
				return 0;
			}
		}
	}
	printf("0");
}
