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
char a[14][8]={"baby","sukhwan","tururu","turu","very","cute","tururu","turu","in","bed","tururu","turu","baby","sukhwan"};
int main(){
	int n;
	scanf("%d",&n);
	n--;
	int i,j;
	if(n%14==2 || n%14==6 || n%14==10){
		if(n/14+2>=5){
			printf("tu+ru*%d",n/14+2);
		}
		else{
			printf("tu");
			for(i=0;i<n/14+2;i++){
				printf("ru");
			}
		}
	}
	else if(n%14==3 || n%14==7 || n%14==11){
		if(n/14+1>=5){
			printf("tu+ru*%d",n/14+1);
		}
		else{
			printf("tu");
			for(i=0;i<n/14+1;i++){
				printf("ru");
			}
		}
	}
	else{
		printf("%s",a[n%14]);
	}
}
