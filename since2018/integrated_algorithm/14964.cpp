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
	int n,m;
	scanf("%d%d",&n,&m);
	char temp[20][20]={0};
	char tetris[20][20]={0};
	int check[20][20]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",temp[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			tetris[i+5][j+5]=temp[i][j];
		}
	}
	int a[5]={0};
	for(i=5;i<n+5;i++){
		for(j=5;j<m+5;j++){
			if(tetris[i][j]!='.' && check[i][j]==0){
				if(tetris[i][j]==tetris[i][j+1] && tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1][j+1] && check[i][j]+check[i+1][j]+check[i][j+1]+check[i+1][j+1]==0){
					check[i][j+1]=1;
					check[i+1][j]=1;
					check[i+1][j+1]=1;
					check[i][j]=1;
					a[0]++;
				}
				if(tetris[i][j]==tetris[i][j+1] && tetris[i][j]==tetris[i][j+1+1] && tetris[i][j]==tetris[i][j+1+1+1] && check[i][j]+check[i][j+1]+check[i][j+1+1]+check[i][j+1+1+1]==0){
					check[i][j]=1;
					check[i][j+1]=1;
					check[i][j+1+1]=1;
					check[i][j+1+1+1]=1;
					a[1]++;
				}
				if(tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1+1][j] && tetris[i][j]==tetris[i+1+1+1][j] && check[i][j]+check[i+1][j]+check[i+1+1][j]+check[i+1+1+1][j]==0){
					check[i][j]=1;
					check[i+1][j]=1;
					check[i+1+1][j]=1;
					check[i+1+1+1][j]=1;
					a[1]++;
				}
				if(tetris[i][j]==tetris[i][j+1] && tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1][j-1] && check[i][j]+check[i+1][j]+check[i][j+1]+check[i+1][j-1]==0){
					check[i][j]=1;
					check[i][j+1]=1;
					check[i+1][j]=1;
					check[i+1][j-1]=1;
					a[2]++;
				}
				if(tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1][j+1] && tetris[i][j]==tetris[i+1+1][j+1] && check[i][j]+check[i+1][j]+check[i+1][j+1]+check[i+1+1][j+1]==0){
					check[i][j]=1;
					check[i+1][j]=1;
					check[i+1][j+1]=1;
					check[i+1+1][j+1]=1;
					a[2]++;
				}
				if(tetris[i][j]==tetris[i][j+1] && tetris[i][j]==tetris[i+1][j+1] && tetris[i][j]==tetris[i+1][j+1+1] && check[i][j]+check[i][j+1]+check[i+1][j+1]+check[i+1][j+1+1]==0){
					check[i][j]=1;
					check[i][j+1]=1;
					check[i+1][j+1]=1;
					check[i+1][j+1+1]=1;
					a[3]++;
				}
				if(tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1][j-1] && tetris[i][j]==tetris[i+1+1][j-1] && check[i][j]+check[i+1][j]+check[i+1][j-1]+check[i+1+1][j-1]==0){
					check[i][j]=1;
					check[i+1][j]=1;
					check[i+1][j-1]=1;
					check[i+1+1][j-1]=1;
					a[3]++;
				}
				if(tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1][j+1] && tetris[i][j]==tetris[i+1][j-1]&& check[i][j]+check[i+1][j]+check[i+1][j+1]+check[i+1][j-1]==0){
					check[i][j]=1;
					check[i+1][j+1]=1;
					check[i+1][j]=1;
					check[i+1][j-1]=1;
					a[4]++;
				}
				if(tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1][j+1] && tetris[i][j]==tetris[i+1+1][j]&& check[i][j]+check[i+1][j]+check[i+1][j+1]+check[i+1+1][j]==0){
					check[i][j]=1;
					check[i+1][j+1]=1;
					check[i+1][j]=1;
					check[i+1+1][j]=1;
					a[4]++;
				}
				if(tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i][j-1] && tetris[i][j]==tetris[i][j+1]&& check[i][j]+check[i+1][j]+check[i][j+1]+check[i][j-1]==0){
					check[i][j]=1;
					check[i][j+1]=1;
					check[i][j-1]=1;
					check[i+1][j]=1;
					a[4]++;
				}
				if(tetris[i][j]==tetris[i+1][j] && tetris[i][j]==tetris[i+1][j-1] && tetris[i][j]==tetris[i+1+1][j]&& check[i][j]+check[i+1][j]+check[i+1][j-1]+check[i+1+1][j]==0){
					check[i][j]=1;
					check[i+1][j-1]=1;
					check[i+1][j]=1;
					check[i+1+1][j]=1;
					a[4]++;
				}
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
}
