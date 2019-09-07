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
using namespace std;
int input[9];
int check[10];
int main(){
	int l;
	scanf("%d",&l);
	int i,j;
	for(i=0;i<l;i++){
		scanf("%d",&input[i]);
	}
	int cur=input[0];
	check[cur]=1;
	for(i=1;i<l;i++){
		int next=input[i];
		if(cur==1){
			if(next==1){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1 || check[2]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[2]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1 || check[4]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[4]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
		}
		else if(cur==2){
			if(next==1){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==8){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
			else if(next==9){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
		}
		else if(cur==3){
			if(next==1){
				if(check[next]==1 || check[2]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[2]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1 || check[6]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[6]=1;
				}
			}
		}
		else if(cur==4){
			if(next==1){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
			else if(next==7){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
		}
		else if(cur==5){
			if(next==1){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
		}
		else if(cur==6){
			if(next==1){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==4){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
		}
		else if(cur==7){
			if(next==1){
				if(check[next]==1 || check[4]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[4]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1 || check[8]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[8]=1;
				}
			}
		}
		else if(cur==8){
			if(next==1){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==2){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
			else if(next==3){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
		}
		else if(cur==9){
			if(next==1){
				if(check[next]==1 || check[5]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[5]=1;
				}
			}
			else if(next==2){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==3){
				if(check[next]==1 || check[6]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[6]=1;
				}
			}
			else if(next==4){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==5){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==6){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==7){
				if(check[next]==1 || check[8]==0){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
					check[8]=1;
				}
			}
			else if(next==8){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
			else if(next==9){
				if(check[next]==1){
					printf("NO");
					return 0;
				}
				else{
					check[next]=1;
				}
			}
		}
		cur=next;
	}
	printf("YES");
}
