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
int cnt[26];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int check=0;
	for(i=0;i<n;i++){
		char name[31]={0};
		scanf("%s",name);
		cnt[name[0]-97]++;
		if(cnt[name[0]-97]>=5){
			check=1;
		}
	}
	if(check==0){
		printf("PREDAJA");
		return 0;
	}
	for(i=0;i<26;i++){
		if(cnt[i]>=5){
			printf("%c",i+97);
		}
	}
}
