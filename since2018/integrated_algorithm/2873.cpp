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
int a[1234][1234];
int check[1234][1234];
int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int i,j;
	int min_val=INF;
	int min_y;
	int min_x;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			if((i+j)%2==1 && min_val>a[i][j]){
				min_val=a[i][j];
				min_y=i;
				min_x=j;
			}
		}
	}
	if(r%2==1){
		for(i=0;i<r;i++){
			for(j=0;j<c-1;j++){
				if(i%2==0){
					printf("R");
				}
				else{
					printf("L");
				}
			}
			if(i!=r-1)
				printf("D");
		}
	}
	else if(c%2==1){
		for(i=0;i<c;i++){
			for(j=0;j<r-1;j++){
				if(i%2==0){
					printf("D");
				}
				else{
					printf("U");
				}
			}
			if(i!=c-1)
				printf("R");
		}
	}
	else{
		for(i=0;;i++){
			if(i%2==0 && (min_y==i || min_y==i+1)){
				break;
			}
			check[i][j]=1;
			for(j=0;j<c-1;j++){
				check[i][j]=1;
				if(i%2==0){
					printf("R");
				}
				else{
					printf("L");
				}
			}
			printf("D");
		}
		int dest_y=i+1;
		int dest_x=c-1;
		j=0;
		check[min_y][min_x]=1;
		check[i][j]=1;
		if(min_y==i+1 && min_x==0){
			printf("R");
			j++;
		}
		else{
			printf("D");
			i++;
		}
		check[i][j]=1;
		while(i!=dest_y || j!=dest_x){
			if(i==dest_y-1){
				if(check[i+1][j]==0){
					check[i+1][j]=1;
					i++;
					printf("D");
					continue;
				}
				else{
					check[i][j+1]=1;
					j++;
					printf("R");
					continue;
				}
			}
			else{
				if(check[i-1][j]==0){
					check[i-1][j]=1;
					i--;
					printf("U");
					continue;
				}
				else{
					check[i][j+1]=1;
					j++;
					printf("R");
					continue;
				}
			}
		}
		if(i==r-1){
			return 0;
		}
		printf("D");
		i++;
		for(int k=0;i<r;i++,k++){
			for(j=0;j<c-1;j++){
				if(k%2==0){
					printf("L");
				}
				else{
					printf("R");
				}
			}
			if(i!=r-1)
				printf("D");
		}
	}
}
