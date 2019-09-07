#include <stdio.h>
#include <string.h>
#define max(a,b) (a>b?a:b)
int main(){
	short count[1002][1002];
	char a[1002]={0};
	char b[1002]={0};
	scanf("%s%s",a,b);
	int i,j;
	int lena;
	int lenb;
	for(lena=0;a[lena];lena++);
	for(lenb=0;b[lenb];lenb++);
	for(i=0;i<lena;i++){
		for(j=0;j<lenb;j++){
			if(a[i]==b[j]){
				count[i+1][j+1]=count[i][j]+1;
			}
			else{
				count[i+1][j+1]=max(count[i][j+1],count[i+1][j]);
			}
		}
	}
	printf("%d",count[lena][lenb]);
}
