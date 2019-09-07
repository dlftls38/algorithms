#include <stdio.h>
#include <string.h>
#define max(a,b) (a>b?a:b)
int main(){
	int count[2][1002]={0};
	char a[1002]={0};
	char b[1002]={0};
	scanf("%s%s",a,b);
	int i,j;
	int lena;
	int lenb;
	for(lena=0;a[lena];lena++);
	for(lenb=0;b[lenb];lenb++);
	for(i=1;i<lena+1;i++){
		for(j=1;j<lenb+1;j++){
			if(a[i-1]==b[j-1]){
				count[i%2][j]=count[(i+1)%2][j-1]+1;
			}
			else{
				count[i%2][j]=max(count[i%2][j-1],count[(i+1)%2][j]);
			}
		}
	}
	printf("%d",count[lena%2][lenb]);
}
