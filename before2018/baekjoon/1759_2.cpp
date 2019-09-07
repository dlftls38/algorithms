#include <stdio.h>
#include <algorithm>
char d[30];
char b[50]={0};
int l,c;
void go(int count1,int count2,int len,int now){
	if(now>c){
	}
	else if(count1>=1 && count2>=2 && len==l){
		printf("%s\n",d);
	}
	else{
		if(b[now]=='a' || b[now]=='e' || b[now]=='i' || b[now]=='o' || b[now]=='u'){
			d[len]=b[now];
			go(count1+1,count2,len+1,now+1);
			d[len]=0;
		}
		else{
			d[len]=b[now];
			go(count1,count2+1,len+1,now+1);
			d[len]=0;
		}	
		go(count1,count2,len,now+1);
	}
}
int main(){
	char a[50]={0};
	int i,j;
	int top=0;
	char q;
	scanf("%d%d%c",&l,&c,&q);
	gets(a);
	for(i=0;i<c*2;i+=2){
		b[top++]=a[i];
	}
	std::sort(b,b+c);
	go(0,0,0,0);
}
