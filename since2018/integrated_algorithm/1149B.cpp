#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
using namespace std;
char s[100001];
int main(){
	int n,q;
	scanf("%d%d%s",&n,&q,s);
	priority_queue<int,vector<int>,greater<int> >pq[26];
	priority_queue<pair<int,char>,vectorpair<int,char>,greaterpair<int,char> >temp[3];
	int minus[3][26]={0};
	int minus_sum[3]={0};
	int i,j;
	for(i=0;i<n;i++){
		pq[s[i]-97].push(i);
	}
	for(i=0;i<q;i++){
		char temp1[2];
		char temp2[2];
		scanf("%s%s",temp1,temp2);
		if(temp1[0]=='+'){
			char temp3[2];
			scanf("%s",temp3);
		}
		if(temp1[0]=='+'){
			if(pq[temp3[0]-97].empty()){
				temp[temp2[0]-48].push(make_pair(pq[temp3[0]-97].top(),temp3[0]));
				minus_sum++;
			}
			else{
				temp[temp2[0]-48].push(make_pair(pq[temp3[0]-97].top(),temp3[0]));
				pq[temp3[0]-97].pop();
			}
		}
		else{
			
			temp[temp2[0]-48].pop();
		}
		sting str[3];
		int len=str[temp2[0]-48].size();
		for(j=0;j<len;j++){
			
		}
		str[temp[2]-48]=temp3[0];
	}
}
