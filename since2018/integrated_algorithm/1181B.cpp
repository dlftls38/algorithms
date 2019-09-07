#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
char a[100001];
int ans[100001];
int temp[100001];
int dist;
int main(){
	int l;
	scanf("%d",&l);
	int i,j;
	scanf("%s",a);
	priority_queue<pair<pair<int,int>,int > ,vector<pair<pair<int,int>,int > >, greater<pair<pair<int,int>,int > > >pq;
	for(i=1;i<l;i++){
		if(a[i]!='0'){
			if(i>l-i){
				pq.push(make_pair(make_pair(i,l-i),0));
			}
			else{
				pq.push(make_pair(make_pair(l-i,i),1));
			}
		}
	}
	if(pq.top().second==0){
		int k=0;
		for(j=pq.top().first.first-1;j>=0;j--){
			ans[k]=a[j]-48;
			k++;
		}
		dist=max(dist,k);
		k=0;
		for(j=l-1;j>=pq.top().first.first;j--){
			ans[k]+=a[j]-48;
			k++;
		}
		dist=max(dist,k);
		for(j=0;j<dist;j++){
			if(ans[j]>9){
				ans[j+1]++;
				ans[j]%=10;
				if(j==dist-1){
					dist++;
					break;
				}
			}
		}
		pq.pop();
	}
	else{
		int k=0;
		for(j=pq.top().first.second-1;j>=0;j--){
			ans[k]=a[j]-48;
			k++;
		}
		dist=max(dist,k);
		k=0;
		for(j=l-1;j>=pq.top().first.second;j--){
			ans[k]+=a[j]-48;
			k++;
		}
		dist=max(dist,k);
		for(j=0;j<dist;j++){
			if(ans[j]>9){
				ans[j+1]++;
				ans[j]%=10;
				if(j==dist-1){
					dist++;
					break;
				}
			}
		}
		pq.pop();
	}
	int pq_size=pq.size();
	for(i=0;i<pq_size;i++){
		if(pq.top().first.first<=dist){
			memset(temp,0,sizeof(temp));
			if(pq.top().second==0){
				int k=0;
				for(j=pq.top().first.first-1;j>=0;j--){
					temp[k]=a[j]-48;
					k++;
				}
				int temp_dist=0;
				temp_dist=max(temp_dist,k);
				k=0;
				for(j=l-1;j>=pq.top().first.first;j--){
					temp[k]+=a[j]-48;
					k++;
				}
				temp_dist=max(temp_dist,k);
				for(j=0;j<temp_dist;j++){
					if(temp[j]>9){
						temp[j+1]++;
						temp[j]%=10;
						if(j==temp_dist-1){
							temp_dist++;
							break;
						}
					}
				}
				int check=0;
				if(temp_dist<dist){
					check=1;
				}
				for(j=dist-1;j>=0;j--){
					if(temp[j]<ans[j]){
						check=1;
						break;
					}
					else if(temp[j]==ans[j]){
						
					}
					else{
						break;
					}
				}
				if(check==1){
					dist=temp_dist;
					for(j=dist-1;j>=0;j--){
						ans[j]=temp[j];
					}
				}
			}
			else{
				int k=0;
				for(j=pq.top().first.second-1;j>=0;j--){
					temp[k]=a[j]-48;
					k++;
				}
				int temp_dist=0;
				temp_dist=max(temp_dist,k);
				k=0;
				for(j=l-1;j>=pq.top().first.second;j--){
					temp[k]+=a[j]-48;
					k++;
				}
				temp_dist=max(temp_dist,k);
				for(j=0;j<temp_dist;j++){
					if(temp[j]>9){
						temp[j+1]++;
						temp[j]%=10;
						if(j==temp_dist-1){
							temp_dist++;
							break;
						}
					}
				}
				int check=0;
				if(temp_dist<dist){
					check=1;
				}
				for(j=dist-1;j>=0;j--){
					if(temp[j]<ans[j]){
						check=1;
						break;
					}
					else if(temp[j]==ans[j]){
						
					}
					else{
						break;
					}
				}
				if(check==1){
					dist=temp_dist;
					for(j=dist-1;j>=0;j--){
						ans[j]=temp[j];
					}
				}
			}
		}
		pq.pop();
	}
	for(i=dist-1;i>=0;i--){
		printf("%d",ans[i]);
	}
}
