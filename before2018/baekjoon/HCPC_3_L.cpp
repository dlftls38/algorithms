#include <stdio.h>
#include <string.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	char a[10001]={0};
	char b[10001]={0};
	scanf("%s%s",a,b);
	int i,j;
	int count[2][10001]={0};
	int lena=strlen(a);
	int lenb=strlen(b);
	for(i=0;i<lena;i++){
		for(j=0;j<lenb;j++){
			if(a[i]==b[j]){
				count[(i+1)%2][j+1]=count[i%2][j]+1;
			}
			else{
				count[(i+1)%2][j+1]=max(count[(i+1)%2][j],count[i%2][j+1]);
			}
		}
	}
	int max=0;
	int index=0;
	for(i=0;i<lena+1;i++){
		for(j=0;j<lenb+1;j++){
			if(max<count[i%2][j]){
				max=count[i%2][j];
				index=i%2;
			}
		}
	}
	if(max==0){
		printf("Not Match");
	}
	else{
		max=0;
		for(i=0;i<lenb+1;i++){
			if(max<count[index][i]){
				max++;
				printf("%c",b[i-1]);
			}
		}
	}
}
