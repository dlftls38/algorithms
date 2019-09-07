#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[101]={0},b[101]={0};
		scanf("%s",a);
		strcpy(b,a);
		int len=strlen(a);
		std::sort(b,b+len);
		std::reverse(b,b+len);
		if(strcmp(b,a)==0) ;
		else next_permutation(a,a+len);
		printf("%s\n",a);
	}
}
