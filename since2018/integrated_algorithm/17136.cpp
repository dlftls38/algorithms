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
using namespace std;
typedef pair<int,int> pii;
int a[10][10];
int ans=INT_MAX;
int sum;
int p[6];
void dq(){
	if(ans<=p[1]+p[2]+p[3]+p[4]+p[5])return;
//	printf("\n");
//	for(int i=0;i<10;i++){
//		for(int j=0;j<10;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("sum=%d\n",sum);
	if(sum==0){
		ans=min(ans,p[1]+p[2]+p[3]+p[4]+p[5]);
//		printf("%d\n",ans);
//		printf("%d %d %d %d %d\n",p[1],p[2],p[3],p[4],p[5]);
		return;
	}
	if(p[1]+p[2]+p[3]+p[4]+p[5]==25){
		return;
	}
	int temp[10][10];
	memcpy(temp,a,sizeof(a));
	int i,j,k,l,m;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i][j]>0){
				for(k=5;k>=1;k--){
					if(p[k]==5)continue;
					int cnt=0;
					if(!(i+k-1<=9 && j+k-1<=9))continue;
					for(l=0;l<k;l++){
						for(m=0;m<k;m++){
							cnt+=a[i+l][j+m];
						}
					}
					if(cnt<k*k)continue;
					for(l=0;l<k;l++){
						for(m=0;m<k;m++){
							a[i+l][j+m]=0;
						}
					}
					p[k]++;
					sum-=k*k;
					dq();
					p[k]--;
					sum+=k*k;
					for(l=0;l<k;l++){
						for(m=0;m<k;m++){
							a[i+l][j+m]=temp[i+l][j+m];
						}
					}
				}
				return;
			}
		}
	}
}
int main(){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	dq();
	printf("%d",ans==INT_MAX?-1:ans);
}
