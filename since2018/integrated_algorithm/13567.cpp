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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int M,n;
	scanf("%d%d",&M,&n);
	int i,j;
	int direction=1;
	int y=0;
	int x=0;
	for(i=0;i<n;i++){
		char a[5]={0};
		int temp;
		scanf("%s%d",a,&temp);
		if(strcmp(a,"MOVE")==0){
			if(direction==0){
				y+=temp;
			}
			else if(direction==1){
				x+=temp;
			}
			else if(direction==2){
				y-=temp;
			}
			else if(direction==3){
				x-=temp;
			}
		}
		else{
			if(temp==0){
				direction--;
			}
			else{
				direction++;
			}
			if(direction==4){
				direction=0;
			}
			if(direction==-1){
				direction=3;
			}
		}
		if(y>M || x>M || y<0 || x<0){
			printf("-1");
			return 0;
		}
	}
	printf("%d %d",x,y);
}
