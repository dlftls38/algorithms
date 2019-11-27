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
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	int i,j;
	int blue[86401]={0};
	int red[86401]={0};
	for(i=0;i<n;i++){
		int t,m;
		string color;
		cin>>t>>color>>m;
		if(color.compare("B")==0){
			blue[t]=m;
		}
		else{
			red[t]=m;
		}
	}
	vector<int>ans1;
	vector<int>ans2;
	int cur_time=0;
	int present_number=1;
	int blue_present_count=0;
	int red_present_count=0;
	int blue_time_count=0;
	int red_time_count=0;
	while(1){
		if(cur_time<86401){
			blue_present_count+=blue[cur_time];
			red_present_count+=red[cur_time];
		}
		int check1=0;
		int check2=0;
		for(i=0;check1==0;i++){
			if(blue_present_count>0 && check1==0){
				if(blue_time_count==0){
					blue_present_count--;
					if(a>0){
						check1=1;
					}
					ans1.push_back(present_number++);
				}
				else{
					check1=1;
				}
			}
			else{
				check1=1;
			}
		}
		for(i=0;check2==0;i++){
			if(red_present_count>0 && check2==0){
				if(red_time_count==0){
					red_present_count--;
					if(b>0){
						check2=1;
					}
					ans2.push_back(present_number++);
				}
				else{
					check2=1;
				}
			}
			else{
				check2=1;
			}
		}
		//printf("-------------------------------------------\n");
		if(blue_present_count>0){
			if(blue_time_count+1<=a){
				blue_time_count++;
			}
		}
		if(red_present_count>0){
			if(red_time_count+1<=b){
				red_time_count++;
			}
		}
		cur_time++;
		if(blue_time_count==a){
			blue_time_count=0;
		}
		if(red_time_count==b){
			red_time_count=0;
		}
		//printf("%d %d %d\n",blue_present_count,red_present_count,cur_time);
		if(blue_present_count+red_present_count==0 && cur_time>90000)break;
	}
	printf("%d\n",ans1.size());
	for(auto it : ans1){
		printf("%d ",it);
	}
	printf("\n");
	printf("%d\n",ans2.size());
	for(auto it : ans2){
		printf("%d ",it);
	}
}
