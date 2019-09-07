#include <stdio.h>
#include <string.h>
char stack[20000];
char stack2[20000];
int c[17009]={0};
int lena;
int lenb;
int len;
int flag;
int count[2][17009]={0};
char a[17009]={0};
char b[17009]={0};
int add;
int ma;
int clear;
void recur(int i,int index,int top){
	if(clear==1){
		return;
	}
	if(add>len || ma+add>count[lena%2][lenb]){
		return;
	}
	if(flag==1){
		for(i=i;i<lena;i++){
			if(add>len || ma+add>count[lena%2][lenb]){
				return;
			}
			if(clear==1){
				return;
			}
			printf("%c %c %d\n",a[i],b[index],c[index]);
			if(index==lenb){
				stack[top]='a';
				stack2[top++]=a[i];
			}
			else if(a[i]==b[index] && c[index]==0){
				stack[top]='c';
				stack2[top++]=a[i];
				index++;
			}
			else{
				stack[top]='m';
				stack2[top++]=a[i];
				ma++;
				recur(i+1,index+1,top);
				if(clear==1){
					return;
				}
				ma--;
				top--;
				add++;
				stack[top]='a';
				stack2[top++]=a[i];
				if(add>len || ma+add>count[lena%2][lenb]){
					return;
				}
			}
		}
		clear=1;
	}
	else{
		for(i=i;i<lena;i++){
			if(index==lenb){
				stack[top]='d';
				stack[top++]=a[i];
			}
			else if(a[i]==b[index] && c[index]==0){
				stack[top]='c';
				stack[top++]=b[index];
				index++;
			}
			else if(a[i]!=b[index] && c[index]==0){
				stack[top]='d';
				stack[top++]=b[index];
			}
			else if(c[index]==1){
				stack[top]='m';
				stack[top++]=b[index];
				index++;
			}
		}
	}
}
int min(int a,int b){
	return (a<b?a:b);
}
int main(){
	scanf("%s%s",a,b);
	int i,j;
	for(lena=0;a[lena];lena++);
	for(lenb=0;b[lenb];lenb++);
	if(lena<lenb){
		flag=1;
        char c[17009]={0};
        strcpy(c,b);
        strcpy(b,a);
        strcpy(a,c);
        int temp=lena;
        lena=lenb;
        lenb=temp;
    }
	for(i=1;i<lenb+1;i++){
		count[0][i]=i;
	}
	for(i=1;i<lena+1;i++){
		count[i%2][0]=i;
		for(j=1;j<lenb+1;j++){
			if(a[i-1]==b[j-1]){
				count[i%2][j]=count[(i+1)%2][j-1];
			}
			else{
				count[i%2][j]=min(min(count[i%2][j-1]+1,count[(i+1)%2][j]+1),count[(i+1)%2][j-1]+1);
			}
		}
	}
	for(i=0;i<lenb+1;i++){
		printf("%d ",count[lena%2][i]);
	}
	printf("\n");
	len = lena-lenb;
	if(lena!=lenb){
		for(i=0;i<lenb;i++){
			if(count[lena%2][i]<=count[lena%2][i+1]){
				c[i]=1;
			}
		}
		recur(0,0,0);
		i=0;
		while(stack[i]!=0){
			printf("%c %c\n",stack[i],stack2[i]);
			i++;
		}
		printf("\n");
	}
	else{
		for(i=0;i<lena;i++){
			if(a[i]==b[i]){
				printf("c %c\n",a[i]);
			}
			else{
				printf("m %c\n",b[i]);
			}
		}
	}
}
//abbbad
//ababbcd
//abbbad
//ababacd
//abbbbad
//abababcd
