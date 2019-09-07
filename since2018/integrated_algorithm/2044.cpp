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
	int m,n;
	scanf("%d%d",&m,&n);
	string s[100];
	int i,j,k;
	for(i=0;i<m;i++){
		cin>>s[i];
	}
	vector<pair<string,pair<int,int>>>v;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(s[i][j]=='+'){
				j++;
				string word;
				int y=0,x=0;
				int check=0;
				while(s[i][j]!='+'){
					if(s[i][j]=='-'){
						x++;
					}
					if(s[i][j]>='a' && s[i][j]<='z'){
						word+=s[i][j];
					}
					if(s[i][j]=='|'){
						check=1;
					}
					j++;
				}
				if(check==0)continue;
				k=i+1;
				while(s[k][j]!='+'){
					y++;
					k++;
				}
				v.push_back({word,{x,y}});
			}
		}
	}
	sort(v.begin(),v.end());
	int size=v.size();
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			s[i][j]='.';
		}
	}
	for(i=0;i<size;i++){
		string word = v[i].first;
		int len_x=v[i].second.first;
		int len_y=v[i].second.second;
		int pos_y=i;
		int pos_x=i;
		s[pos_y][pos_x]='+';
		int temp_y=pos_y+1;
		for(j=0;j<len_y;j++){
			s[temp_y][pos_x]='|';
			temp_y++;
		}
		int temp_x=pos_x+1;
		for(j=0;j<len_x/2;j++){
			s[pos_y][temp_x]='-';
			temp_x++;
		}
		s[pos_y][temp_x]='|';
		temp_x++;
		for(j=0;j<word.length();j++){
			s[pos_y][temp_x]=word[j];
			temp_x++;
		}
		s[pos_y][temp_x]='|';
		temp_x++;
		for(j=0;j<len_x/2+len_x%2;j++){
			s[pos_y][temp_x]='-';
			temp_x++;
		}
		s[pos_y][temp_x]='+';
		temp_y=pos_y+1;
		for(j=0;j<len_y;j++){
			s[temp_y][temp_x]='|';
			temp_y++;
		}
		s[temp_y][temp_x]='+';
		for(j=temp_x-1;j>pos_x;j--){
			s[temp_y][j]='-';
		}
		s[temp_y][j]='+';
		for(j=pos_y+1;j<temp_y;j++){
			for(k=pos_x+1;k<temp_x;k++){
				s[j][k]='.';
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
}
