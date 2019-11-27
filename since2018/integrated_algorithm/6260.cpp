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
	while(1){
		string s;
		cin>>s;
		if(!s.compare("#"))break;
		int pos[100];
		pos['A']=2;
		pos['B']=2;
		pos['C']=2;
		pos['D']=3;
		pos['E']=3;
		pos['F']=3;
		pos['G']=4;
		pos['H']=4;
		pos['I']=4;
		pos['J']=5;
		pos['K']=5;
		pos['L']=5;
		pos['M']=6;
		pos['N']=6;
		pos['O']=6;
		pos['P']=7;
		pos['Q']=7;
		pos['R']=7;
		pos['S']=7;
		pos['T']=8;
		pos['U']=8;
		pos['V']=8;
		pos['W']=9;
		pos['X']=9;
		pos['Y']=9;
		pos['Z']=9;
		vector<char>c[100];
		c[2].push_back('A');
		c[2].push_back('B');
		c[2].push_back('C');
		c[3].push_back('D');
		c[3].push_back('E');
		c[3].push_back('F');
		c[4].push_back('G');
		c[4].push_back('H');
		c[4].push_back('I');
		c[5].push_back('J');
		c[5].push_back('K');
		c[5].push_back('L');
		c[6].push_back('M');
		c[6].push_back('N');
		c[6].push_back('O');
		c[7].push_back('P');
		c[7].push_back('Q');
		c[7].push_back('R');
		c[7].push_back('S');
		c[8].push_back('T');
		c[8].push_back('U');
		c[8].push_back('V');
		c[9].push_back('W');
		c[9].push_back('X');
		c[9].push_back('Y');
		c[9].push_back('Z');
		int len=s.length();
		int i,j;
		for(i=0;i<len;i++){
			int small=0;
			if(s[i]>='a')small='a'-'A';
			s[i]-=small;
			int classs=pos[s[i]];
			int size=c[classs].size();
			int p;
			for(j=0;j<size;j++){
				if(c[classs][j]==s[i])p=j;
			}
			p-=i+1;
			while(p<0){
				p+=size;
			}
			printf("%c",c[classs][p]+small);
		}
		printf("\n");
	}
}
