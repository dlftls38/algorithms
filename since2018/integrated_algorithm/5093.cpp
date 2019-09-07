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
using namespace std;
typedef pair<int,int> pii;
int main(){
	while(1){
		int i;
		char a[11]={0};
		int check[26]={0};
		int cnt[26]={0};
		scanf("%s",a);
		if(a[0]=='#'){
			break;
		}
		int len=strlen(a);
		int cur=1;
		for(i=0;i<len;i++){
			if(a[i]>='a'){
				check[a[i]-'a']++;
				if(check[a[i]-'a']==2){
					cnt[a[i]-'a']=cur++;
				}
				if(cnt[a[i]-'a']==1){
					a[i]='*';
				}
				else if(cnt[a[i]-'a']==2){
					a[i]='?';
				}
				else if(cnt[a[i]-'a']==3){
					a[i]='/';
				}
				else if(cnt[a[i]-'a']==4){
					a[i]='+';
				}
				else if(cnt[a[i]-'a']==5){
					a[i]='!';
				}
			}
			else{
				check[a[i]-'A']++;
				if(check[a[i]-'A']==2){
					cnt[a[i]-'A']=cur++;
				}
				if(cnt[a[i]-'A']==1){
					a[i]='*';
				}
				else if(cnt[a[i]-'A']==2){
					a[i]='?';
				}
				else if(cnt[a[i]-'A']==3){
					a[i]='/';
				}
				else if(cnt[a[i]-'A']==4){
					a[i]='+';
				}
				else if(cnt[a[i]-'A']==5){
					a[i]='!';
				}
			}
		}
		printf("%s\n",a);
	}
}
