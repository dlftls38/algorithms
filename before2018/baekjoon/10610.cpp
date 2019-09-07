#include <cstdio>
#include <cstring>
#include <algorithm>
int main(){
	int i,len,sum;
	char a[100001]={0};
	scanf("%s",a);
	len = strlen(a);
	for(i=0;i<len;i++){
		sum+=a[i]-48;
	}
	std::sort(a,a+len);
	std::reverse(a,a+len);
	if(sum%3!=0 || len==1 || a[len-1]!='0'){
		printf("-1");
	}
	else{
		printf("%s",a);
	}
}
