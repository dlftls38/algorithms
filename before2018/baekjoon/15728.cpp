#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector< pair<int , pair<int ,int> > > v;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	int a[101]={0};
	int b[101]={0};
	int check1[10001]={0};
	int check2[10001]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		if(b[i]<0){
			check2[-b[i]]++;
		}
		else{
			check1[b[i]]++;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			v.push_back(make_pair(a[i]*b[j],make_pair(b[j],a[i])));		
		}
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(i=0;k>0;i++){
		if(v[i].second.first<0){
			if(check2[-v[i].second.first]>0){
				check2[-v[i].second.first]--;
				k--;
			}
		}
		else{
			if(check1[v[i].second.first]>0){
				check1[v[i].second.first]--;
				k--;
			}
		}
	}
	for(i=0;i<n*n;i++){
		if(v[i].second.first<0 && check2[-v[i].second.first]>0){
			printf("%d",v[i].first);
			break;
		}
		if(v[i].second.first>=0 && check1[v[i].second.first]>0){
			printf("%d",v[i].first);
			break;
		}
	}
}
