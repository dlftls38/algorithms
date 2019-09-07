#include <cstdio>
#include <algorithm>
#include <cstring>
char result[100000][101],top;
void search(char original[101],char newchar[101],int fill,int orilen,int chok[100]){
	int i;
	if(fill==orilen){
		strcpy(result[top++],newchar);
		printf("%s\n",newchar);
		return;
	}
	for(i=0;i<orilen;i++){
		if(chok[i]==0){
			newchar[fill]=original[i];
			chok[i]=1;
			search(original,newchar,fill+1,orilen,chok);
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
		search(a,b,0,len,check);
		/*for(i=0;i<top;i++){
			if(strcmp(c,result[i])==0){
				if(i+1==top){
					printf("%s\n",c);
				}
				else{
					printf("%s\n",result[i+1]);
				}
				break;
			}
		}*/
		for(i=0;i<top;i++){
			for(j=0;j<len;j++){
				result[i][j]=0;
			}
		}
		top=0;
		for(i=0;i<len;i++){
			check[i]=0;
		}
	}
}
