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
	int i,j,k;
	char board[10][10]={0};
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
			board[i][j]='.';
		}
	}
	board[3][3]='W';
	board[4][4]='W';
	board[3][4]='B';
	board[4][3]='B';
	for(i=0;i<n;i++){
		int r,c;
		scanf("%d%d",&r,&c);
		char color_from;
		char color_to;
		if(i%2==0){
			color_from='W';
			color_to='B';
		}
		else{
			color_from='B';
			color_to='W';
		}
		board[r][c]=color_to;
		if(board[r][c+1]==color_from){
			for(j=1;c+j<7;j++){
				if(board[r][c+j]==color_to){
					for(k=1;k<j;k++){
						board[r][c+k]=color_to;
					}
					break;
				}
				else if(board[r][c+j]=='.'){
					break;
				}
			}
		}
		if(board[r][c-1]==color_from){
			for(j=1;c-j>0;j++){
				if(board[r][c-j]==color_to){
					for(k=1;k<j;k++){
						board[r][c-k]=color_to;
					}
					break;
				}
				else if(board[r][c-j]=='.'){
					break;
				}
			}
		}
		if(board[r+1][c]==color_from){
			for(j=1;r+j<7;j++){
				if(board[r+j][c]==color_to){
					for(k=1;k<j;k++){
						board[r+k][c]=color_to;
					}
					break;
				}
				else if(board[r+j][c]=='.'){
					break;
				}
			}
		}
		if(board[r-1][c]==color_from){
			for(j=1;r-j>0;j++){
				if(board[r-j][c]==color_to){
					for(k=1;k<j;k++){
						board[r-k][c]=color_to;
					}
					break;
				}
				else if(board[r-j][c]=='.'){
					break;
				}
			}
		}
		if(board[r-1][c-1]==color_from){
			for(j=1;r-j>0 && c-j>0;j++){
				if(board[r-j][c-j]==color_to){
					for(k=1;k<j;k++){
						board[r-k][c-k]=color_to;
					}
					break;
				}
				else if(board[r-j][c-j]=='.'){
					break;
				}
			}
		}
		if(board[r-1][c+1]==color_from){
			for(j=1;r-j>0 && c+j<7;j++){
				if(board[r-j][c+j]==color_to){
					for(k=1;k<j;k++){
						board[r-k][c+k]=color_to;
					}
					break;
				}
				else if(board[r-j][c+j]=='.'){
					break;
				}
			}
		}
		if(board[r+1][c+1]==color_from){
			for(j=1;r+j<7 && c+j<7;j++){
				if(board[r+j][c+j]==color_to){
					for(k=1;k<j;k++){
						board[r+k][c+k]=color_to;
					}
					break;
				}
				else if(board[r+j][c+j]=='.'){
					break;
				}
			}
		}
		if(board[r+1][c-1]==color_from){
			for(j=1;r+j<7 && c-j>0;j++){
				if(board[r+j][c-j]==color_to){
					for(k=1;k<j;k++){
						board[r+k][c-k]=color_to;
					}
					break;
				}
				else if(board[r+j][c-j]=='.'){
					break;
				}
			}
		}
//		printf("\n");
//		for(int l=1;l<=6;l++){
//			printf("%d ",l);
//			for(int m=1;m<=6;m++){
//				printf("%c",board[l][m]);
//			}
//			printf("\n");
//		}
//		printf("\n");
	}
	int black=0;
	int white=0;
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
			printf("%c",board[i][j]);
			if(board[i][j]=='B'){
				black++;
			}
			else if(board[i][j]=='W'){
				white++;
			}
		}
		printf("\n");
	}
	if(black>white){
		printf("Black");
	}
	else{
		printf("White");
	}
}
