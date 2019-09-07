#include <stdio.h>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j,k,p;
		pair <int,string> s[10000];
		int position[11]={0};
		char a[10000][11]={0};
		int len[10000]={0};
		for(i=0;i<n;i++){
			char b[11]={0};
			scanf("%s",b);
			s[i].second = b;
			s[i].first=strlen(b);
		}
		sort(s,s+n);
		for(i=0;i<n;i++){
			strcpy(a[i],s[i].second.c_str());
			len[i]=s[i].first;
		}
		for(i=0;i<n;i++){
			position[len[i]]=i;
		}
		int flag=0;
		for(i=0;i<n;i++){
			for(j=position[len[i]]+1;j<n;j++){
				if(strncmp(a[i],a[j],len[i])==0){
					flag=1;
					break;
				}
				/*int num=0;
				for(k=0;k<s[i].first;k++){
					if(s[i].second.at(k)!=s[j].second.at(k)){
						break;
					}
					else{
						num++;
					}
				}
				if(num==s[i].first){
					flag=1;
					break;
				}*/
			}
			if(flag==1){
				break;
			}
		}
		if(flag==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
