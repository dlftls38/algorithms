#include <cstdio>
#include <algorithm>
#include <cstring>
int count;
char result[101];
void search(char original[101],char newchar[101],int fill,int orilen,int chok[100],char real[101]){
	int i;
	if(fill==orilen){
		if(count==1){
			strcpy(result,newchar);
			count=2;
		}
		if(strcmp(newchar,real)==0 && count==0){
			count=1;
		}
		return;
	}
	for(i=0;i<orilen;i++){
		if(chok[i]==0){
			newchar[fill]=original[i];
			chok[i]=1;
			search(original,newchar,fill+1,orilen,chok,real);
			chok[i]=0;
		}
	}
}
int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		char a[101]={0},b[101]={0},c[101]={0};
		int check[100]={0};
		scanf("%s",a);
		strcpy(c,a);
		int len=strlen(a);
		std::sort(a,a+len);
		count=0;
		search(a,b,0,len,check,c);
		if(count==1) printf("%s\n",c);
		else printf("%s\n",result);
		for(i=0;i<len;i++){
			result[i]=0;
		}
		for(i=0;i<len;i++){
			check[i]=0;
		}
	}
}
