#include <cstdio>
#include <cstring>
#include <algorithm>
int main(){
	int n,i,j,len,p=0;
	char a[101][15]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		char b[15]={0};
		len = strlen(a[i]);
		std::reverse(a[i],a[i]+len);
		strcpy(b,a[i]);
		std::reverse(a[i],a[i]+len);
		for(j=i;j<n;j++){
			if(strcmp(b,a[j])==0){
				p=1;
				break;
			}
		}
		if(p==1){
			break;
		}
	}
	printf("%d %c",len,a[i][len/2]);
}
