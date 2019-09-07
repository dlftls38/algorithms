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
	string s;
	getline(cin,s);
	char a[100]={0};
	strcpy(a,s.c_str());
	char *str=strtok(a," ");
	vector<string>vv;
	while(str!=NULL){
		char temp[100]={0};
		strcpy(temp,str);
		vv.push_back(str);
		str=strtok(NULL," ");
	}
	vector<char>v;
	v.push_back(vv[0][0]);
	v.push_back(vv[1][0]);
	v.push_back(vv[2][0]);
	v.push_back(vv[3][0]);
	v.push_back(vv[4][0]);
	priority_queue<int,vector<int>,greater<int> >pq;
	int k1=atoi(vv[0].c_str());
	int k2=atoi(vv[2].c_str());
	int k3=atoi(vv[4].c_str());
	if(v[1]=='+' && v[3]=='+'){
		pq.push((k1+k2)+k3);
		pq.push(k1+(k2+k3));
	}
	else if(v[1]=='+' && v[3]=='-'){
		pq.push((k1+k2)-k3);
		pq.push(k1+(k2-k3));
	}
	else if(v[1]=='+' && v[3]=='*'){
		pq.push((k1+k2)*k3);
		pq.push(k1+(k2*k3));
	}
	else if(v[1]=='+' && v[3]=='/'){
		pq.push((k1+k2)/k3);
		pq.push(k1+(k2/k3));
	}
	else if(v[1]=='-' && v[3]=='+'){
		pq.push((k1-k2)+k3);
		pq.push(k1-(k2+k3));
	}
	else if(v[1]=='-' && v[3]=='-'){
		pq.push((k1-k2)-k3);
		pq.push(k1-(k2-k3));
	}
	else if(v[1]=='-' && v[3]=='*'){
		pq.push((k1-k2)*k3);
		pq.push(k1-(k2*k3));
	}
	else if(v[1]=='-' && v[3]=='/'){
		pq.push((k1-k2)/k3);
		pq.push(k1-(k2/k3));
	}
	else if(v[1]=='*' && v[3]=='+'){
		pq.push((k1*k2)+k3);
		pq.push(k1*(k2+k3));
	}
	else if(v[1]=='*' && v[3]=='-'){
		pq.push((k1*k2)-k3);
		pq.push(k1*(k2-k3));
	}
	else if(v[1]=='*' && v[3]=='*'){
		pq.push((k1*k2)*k3);
		pq.push(k1*(k2*k3));
	}
	else if(v[1]=='*' && v[3]=='/'){
		pq.push((k1*k2)/k3);
		pq.push(k1*(k2/k3));
	}
	else if(v[1]=='/' && v[3]=='+'){
		pq.push((k1/k2)+k3);
		pq.push(k1/(k2+k3));
	}
	else if(v[1]=='/' && v[3]=='-'){
		pq.push((k1/k2)-k3);
		pq.push(k1/(k2-k3));
	}
	else if(v[1]=='/' && v[3]=='*'){
		pq.push((k1/k2)*k3);
		pq.push(k1/(k2*k3));
	}
	else if(v[1]=='/' && v[3]=='/'){
		pq.push((k1/k2)/k3);
		pq.push(k1/(k2/k3));
	}
	printf("%d\n",pq.top());
	pq.pop();
	printf("%d",pq.top());
}
