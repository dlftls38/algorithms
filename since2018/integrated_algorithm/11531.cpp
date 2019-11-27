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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	string log[100];
	int cnt=0;
	while(1){
		string temp;
		getline(cin,temp);
		if(temp.compare("-1")==0){
			break;
		}
		log[cnt++]=temp;
	}
	int wrong[100]={0};
	int i,j;
	int ans=0;
	int ans_time=0;
	for(i=0;i<cnt;i++){
		char temp[1000]={0};
		strcpy(temp,log[i].c_str());
		char *str=strtok(temp," ");
		int time;
		char problem;
		int pos=0;
		while(str!=NULL){
			pos++;
			if(pos==1){
				time=atoi(str);
			}
			else if(pos==2){
				problem=str[0];
			}
			else{
				if(strcmp(str,"right")==0){
					ans++;
					ans_time+=time+wrong[problem]*20;
				}
				else{
					wrong[problem]++;
				}
			}
			str=strtok(NULL," ");
		}
	}
	printf("%d %d",ans,ans_time);
}
