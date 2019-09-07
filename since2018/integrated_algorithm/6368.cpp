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
	scanf("%d",&n);
	int i,j,k,l;
	string c[200];
	c['A']=".-";
	c['B']="-...";
	c['C']="-.-.";
	c['D']="-..";
	c['E']=".";
	c['F']="..-.";
	c['G']="--.";
	c['H']="....";
	c['I']="..";
	c['J']=".---";
	c['K']="-.-";
	c['L']=".-..";
	c['M']="--";
	c['N']="-.";
	c['O']="---";
	c['P']=".--.";
	c['Q']="--.-";
	c['R']=".-.";
	c['S']="...";
	c['T']="-";
	c['U']="..-";
	c['V']="...-";
	c['W']=".--";
	c['X']="-..-";
	c['Y']="-.--";
	c['Z']="--..";
	c['_']="..--";
	c['.']="---.";
	c[',']=".-.-";
	c['?']="----";
	for(i=1;i<=n;i++){
		string s;
		cin>>s;
		string e;
		for(auto it : s){
			e+=c[it];
		}
		string num;
		for(auto it : s){
			char temp[10]={0};
			sprintf(temp,"%d",c[it].length());
			num+=temp;
		}
		reverse(num.begin(),num.end());
		int cur=0;
		printf("%d: ",i);
		for(j=0;j<num.size();j++){
			string f;
			for(k=0;k<num[j]-'0';k++){
				f+=e[cur];
				cur++;
			}
			for(k=0;k<200;k++){
				if(f.compare(c[k])==0){
					printf("%c",k);
					break;
				}
			}
		}
		printf("\n");
	}
}
