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
int n;
string s;
int ans=INT_MIN;
void cal(string t){
	vector<int>number;
	vector<char>operate;
	int cur=0;
	while(cur<t.length()){
		if(t[cur]=='('){
			cur++;
			
			string a="";
			while(t[cur]>='0' && t[cur]<='9'){
				a+=t[cur];
				cur++;
			}
			int num1=atoi(a.c_str());
			
			int op=t[cur];
			cur++;
			
			string b="";
			while(t[cur]>='0' && t[cur]<='9'){
				b+=t[cur];
				cur++;
			}
			int num2=atoi(b.c_str());
			
			if(op=='+'){
				number.push_back(num1+num2);	
			}
			else if(op=='-'){
				number.push_back(num1-num2);
			}
			else if(op=='*'){
				number.push_back(num1*num2);
			}
			
			cur++;//°ýÈ£ 
			
			if(cur<t.length()){
				operate.push_back(t[cur]);
				cur++;	
			}
		}
		else{
			string a="";
			while(t[cur]>='0' && t[cur]<='9'){
				a+=t[cur];
				cur++;
			}
			int num1=atoi(a.c_str());
			number.push_back(num1);
			
			if(cur<t.length()){
				operate.push_back(t[cur]);
				cur++;	
			}
		}		
	}
	int num_pos=0;
	int op_pos=0;
	int temp=number[num_pos];
	num_pos++;
	while(num_pos<number.size()){
		if(operate[op_pos]=='+'){
			temp+=number[num_pos];
		}
		else if(operate[op_pos]=='-'){
			temp-=number[num_pos];
		}
		else if(operate[op_pos]=='*'){
			temp*=number[num_pos];
		}
		num_pos++;
		op_pos++;
	}
	ans=max(ans,temp);
//	printf("------------\n");
//	printf("%s\n",t.c_str());
//	for(auto it : number){
//		printf("%d ",it);
//	}
//	printf("\n");
//	for(auto it : operate){
//		printf("%c ",it);
//	}
//	printf("\n");
//	
//	for(auto it : t){
//		printf("!! %c\n",it);
//	}
//	printf("------------\n");
}
void solve(string cur, int pos){
	if(n-pos<3){
		if(pos<n){
			cal(cur+s[pos]);
		}
		else{
			cal(cur);
		}
	}
	else{
		string next_1 = cur;
		next_1 += s[pos];
		next_1 += s[pos+1];
		solve(next_1,pos+2);
		string next_2 = cur;
		next_2 += '(';
		next_2 += s[pos];
		next_2 += s[pos+1];
		next_2 += s[pos+2];
		next_2 += ')';
		if(pos+3<n){
			next_2 += s[pos+3];
			solve(next_2,pos+4);
		}
		else{
			solve(next_2,pos+3);
		}
	}
}
int main(){
	cin>>n>>s;
	solve("",0);
	printf("%d",ans);
}
