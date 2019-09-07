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
	int tc;
	scanf("%d",&tc);
	int i,j,k,l,m;
	for(i=1;i<=tc;i++){
		int n;
		scanf("%d",&n);
		char trash;
		scanf("%c",&trash);
		char songs[100][101]={0};
		for(j=0;j<n;j++){
			for(k=0;;k++){
				char temp;
				scanf("%c",&temp);
				if(temp=='\n'){
					break;
				}
				else{
					songs[j][k]=temp;
				}
			}
			int len=strlen(songs[j]);
			for(k=0;k<len;k++){
				if(songs[j][k]>='a'){
					songs[j][k]-='a'-'A';
				}
			}
		}
		printf("Case #%d:\n",i);
		if(n==1){
			printf("\"\"\n");
			continue;
		}
		for(j=0;j<n;j++){
			int len=strlen(songs[j]);
			char ans[101]={0};
			for(k=1;k<=len;k++){
				if(strlen(ans)!=0)break;
				for(l=0;l<len-k+1;l++){
					map<string,int>mp;
					char substr[101]={0};
					strncpy(substr,songs[j]+l,k);
					//printf("%s  %s\n",songs[j],substr);
					if(mp[substr]==1)continue;
					mp[substr]=1;
					char* exist;
					int check=0;
					for(m=0;m<n;m++){
						if(j==m)continue;
						exist=strstr(songs[m],substr);
						if(exist!=NULL){
							check=1;
							break;
						}
					}
					if(check==0){
						if(strcmp(ans,substr)>0 || strlen(ans)==0){
							strcpy(ans,substr);
						}
					}
				}
			}
			int sublen=strlen(ans);
			if(sublen==0){
				printf(":(\n");
			}
			else{
				printf("\"%s\"\n",ans);
			}
		}
	}
}
