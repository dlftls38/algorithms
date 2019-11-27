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
	int n;
	cin>>n;
	int i,j;
	cin.ignore();
	string special="()[]{}.,;:";
	for(j=1;j<=n;j++){
		string s,t;
		getline(cin,s);
		getline(cin,t);
		int len_s=s.length();
		int len_t=t.length();
		string ss,tt;
		for(i=0;i<len_s;i++){
			if(s[i]!=' '){
				s=s.substr(i);
				len_s-=i;
				break;
			}
		}
		for(i=len_s-1;i>=0;i--){
			if(s[i]!=' '){
				s.erase(i+1);
				len_s=i+1;
				break;
			}
		}
		for(i=0;i<s.length();i++){
			if(special.find(s[i])!=string::npos){
				while(i>0 && s[i-1]==' '){
					s.erase(i-1,1);
					i--;
				}
				while(i>0 && s[i+1]==' '){
					s.erase(i+1,1);
				}
			}
		}
		for(i=0;i<s.length();i++){
			while(s[i]==' ' && i<s.length()-1 && s[i+1]==' '){
				s.erase(i+1,1);
			}
		}
		for(i=0;i<s.length();i++){
			if(s[i]=='[' || s[i]=='{'){
				s[i]='(';
			}
			if(s[i]==']' || s[i]=='}'){
				s[i]=')';
			}
			if(s[i]==';'){
				s[i]=',';
			}
			if(s[i]>='a'){
				s[i]-='a'-'A';
			}
		}
		
		for(i=0;i<len_t;i++){
			if(t[i]!=' '){
				t=t.substr(i);
				len_t-=i;
				break;
			}
		}
		for(i=len_t-1;i>=0;i--){
			if(t[i]!=' '){
				t.erase(i+1);
				len_t=i+1;
				break;
			}
		}
		for(i=0;i<t.length();i++){
			if(special.find(t[i])!=string::npos){
				while(i>0 && t[i-1]==' '){
					t.erase(i-1,1);
					i--;
				}
				while(i>0 && t[i+1]==' '){
					t.erase(i+1,1);
				}
			}
		}
		for(i=0;i<t.length();i++){
			while(t[i]==' ' && i<t.length()-1 && t[i+1]==' '){
				t.erase(i+1,1);
			}
		}
		for(i=0;i<t.length();i++){
			if(t[i]=='[' || t[i]=='{'){
				t[i]='(';
			}
			if(t[i]==']' || t[i]=='}'){
				t[i]=')';
			}
			if(t[i]==';'){
				t[i]=',';
			}
			if(t[i]>='a'){
				t[i]-='a'-'A';
			}
		}
		if(s.compare(t)==0){
			printf("Data Set %d: equal\n\n",j);
		}
		else{
			printf("Data Set %d: not equal\n\n",j);
		}
	}
}
