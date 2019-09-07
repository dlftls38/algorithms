#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char a[1001]={0};
	scanf("%s",a);
	int count=0;
	int state=a[0];
	for(int i=0;i<strlen(a);i++){
		if(state==a[i]){
			count++;
		}
		else{
			state=a[i];
			count=1;
		}
		if(count==7){
			break;
		}
	}
	if(count==7) printf("YES");
	else printf("NO");
}
