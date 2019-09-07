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
	int n;
	char a[101];
	scanf("%d%s",&n,a);
	int i,j;
	char temp1[101]={0};
	char temp2[101]={0};
	int len=strlen(a);
	int len1=0;
	int len2=0;
	if(n==1){
		printf("%s\n",a);
		for(i=0;i<len;i++){
			if(a[i]<='Z'){
				temp1[len1]='_';
				len1++;
				temp1[len1]=a[i]+32;
				len1++;
			}
			else{
				temp1[len1]=a[i];
				len1++;
			}
		}
		printf("%s\n",temp1);
		a[0]-=32;
		printf("%s",a);
	}
	else if(n==2){
		for(i=0;i<len;i++){
			if(a[i]!='_'){
				temp1[len1]=a[i];
				if(i>0 && a[i-1]=='_'){
					temp1[len1]-=32;
				}
				len1++;
			}
		}
		printf("%s\n",temp1);
		printf("%s\n",a);
		temp1[0]-=32;
		printf("%s",temp1);
	}
	else{
		strcpy(temp1,a);
		temp1[0]+=32;
		printf("%s\n",temp1);
		for(i=0;i<len;i++){
			if(temp1[i]<='Z'){
				temp2[len2]='_';
				len2++;
				temp2[len2]=temp1[i]+32;
				len2++;
			}
			else{
				temp2[len2]=temp1[i];
				len2++;
			}
		}
		printf("%s\n",temp2);
		printf("%s",a);
	}
}
