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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	char what;
	scanf("%c",&what);
	int i,j;
	for(i=0;i<n;i++){
		char s[50];
		fgets(s,50,stdin);
		char *ptr=strtok(s," ");
		long long a=0,b=0,c=0;
		int cur=0;
		char m;
		while(ptr!=NULL){
			if(cur==0){
				a=atoll(ptr);
				cur++;
			}
			else if(cur==1){
				m=ptr[0];
				cur++;
			}
			else if(cur==2){
				b=atoll(ptr);
				cur++;
			}
			else if(cur==3){
				cur++;
			}
			else{
				c=atoll(ptr);
			}
			ptr=strtok(NULL," ");
		}
		if(m=='+'){
			if(a+b==c){
				printf("correct\n");
			}
			else{
				printf("wrong answer\n");
			}
		}
		else if(m=='-'){
			if(a-b==c){
				printf("correct\n");
			}
			else{
				printf("wrong answer\n");
			}
		}
		else if(m=='/'){
			if(a/b==c){
				printf("correct\n");
			}
			else{
				printf("wrong answer\n");
			}
		}
		else if(m=='*'){
			if(a*b==c){
				printf("correct\n");
			}
			else{
				printf("wrong answer\n");
			}
		}
	}
}
