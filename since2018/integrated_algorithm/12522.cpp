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
	int i,j,k,l,m,t;
	for(t=1;t<=tc;t++){
		char str[101]={0};
		scanf("%s",str);
		int len=strlen(str);
//		int alphabat[26]={0};
//		for(int pos=0;pos<len;pos++){
//			alphabat[str[pos]-'a']++;
//		}
//		int cnt=0;
//		if(alphabat['a'-'a'])cnt++;
//		if(alphabat['e'-'a'])cnt++;
//		if(alphabat['i'-'a'])cnt++;
//		if(alphabat['o'-'a'])cnt++;
//		if(alphabat['u'-'a'])cnt++;
//		if(cnt>=2){
//			printf("Case #%d: Nothing.\n",t);
//			continue;	
//		}
		int spell=0;
		for(int start=0;start<len;start++){
			for(int end=start+1;end<len;end++){
				int sub_len=end-start+1;
				if(sub_len<3)continue;
				int alphabat[26]={0};
				for(int pos=start;pos<=end;pos++){
					alphabat[str[pos]-'a']++;
				}
				int cnt=0;
				if(alphabat['a'-'a'])cnt++;
				if(alphabat['e'-'a'])cnt++;
				if(alphabat['i'-'a'])cnt++;
				if(alphabat['o'-'a'])cnt++;
				if(alphabat['u'-'a'])cnt++;
				if(cnt>=2)continue;
				if(alphabat['a'-'a']+alphabat['e'-'a']+alphabat['i'-'a']+alphabat['o'-'a']+alphabat['u'-'a']<3)continue;
				char vowel;
				if(alphabat['a'-'a'])vowel='a';
				if(alphabat['e'-'a'])vowel='e';
				if(alphabat['i'-'a'])vowel='i';
				if(alphabat['o'-'a'])vowel='o';
				if(alphabat['u'-'a'])vowel='u';
				int plus=0;
				if(sub_len%2==1)plus=1;
				for(int dist=1;dist<sub_len/2+plus;dist++){
					char head[101]={0};
					char middle[101]={0};
					char tail[101]={0};
					strncpy(head,str+start,dist);
					strncpy(middle,str+start+dist,sub_len-dist*2);
					strncpy(tail,str+start+dist+sub_len-dist*2,dist);
					if(strcmp(head,tail)!=0)continue;
					char *check1 = strchr(head,vowel);
					char *check2 = strchr(middle,vowel);
					char *check3 = strchr(tail,vowel);
					if(check1==NULL || check2==NULL || check3==NULL)continue;
					spell=1;
					//printf("%s %s %s\n",head,middle,tail);
				}
			}
		}
		if(spell==0){
			printf("Case #%d: Nothing.\n",t);
		}
		else{
			printf("Case #%d: Spell!\n",t);
		}
	}
}
