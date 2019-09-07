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
char s[100001];
char x[700001];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		int n;
		scanf("%d",&n);
		scanf("%s",x);
		int i,j;
		deque<int>dq;
		char *ptr=strtok(x,"[,]");
		while(ptr!=NULL){
			dq.push_back(atoi(ptr));
			ptr=strtok(NULL,"[,]");
		}
		int len=strlen(s);
		int pos=0;
		int e=0;
		for(i=0;i<len;i++){
			if(s[i]=='R'){
				if(pos==0){
					pos=1;
				}
				else{
					pos=0;
				}
			}
			else{
				if(n==0){
					e=1;
					printf("error\n");
					break;
				}
				n--;
				if(pos==0){
					dq.pop_front();
				}
				else{
					dq.pop_back();
				}
			}
		}
		if(e==0){
			printf("[");
			for(i=0;i<n;i++){
				if(pos==0){
					printf("%d",dq.front());
					dq.pop_front();
				}
				else{
					printf("%d",dq.back());
					dq.pop_back();
				}
				if(i!=n-1){
					printf(",");
				}
			}
			printf("]\n");
		}
	}
}
