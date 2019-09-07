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
	while(tc--){
		int m;
		scanf("%d",&m);
		if(m==1){
			char s[100]={0};
			scanf("%s",s);
			char *str=strtok(s,".");
			unsigned long long ans=0;
			int i,j;
			unsigned long long mul=1;
			for(i=0;i<56;i++){
				mul*=2;
			}
			while(str!=NULL){
				int temp=atoi(str);
				for(i=128;i>=1;i/=2){
					if(temp-i>=0){
						temp-=i;
						ans+=mul*i;
					}
				}
				mul/=256;
				str=strtok(NULL,".");
			}
			printf("%llu\n",ans);
		}
		else{
			unsigned long long input;
			scanf("%llu",&input);
			int i,j;
			unsigned long long mul=1;
			for(i=0;i<56;i++){
				mul*=2;
			}
			for(i=0;i<8;i++){
				int temp=0;
				for(j=128;j>=1;j--){
					if(input>=j*mul){
						input-=j*mul;
						temp+=j;
					}
				}
				printf("%d",temp);
				if(i!=7)printf(".");
				mul/=256;
			}
			printf("\n");
		}
	}
}
