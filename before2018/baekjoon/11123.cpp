#include <stdio.h>
int h,w;
int q[100000];
int q2[100000];
int tail;
int head;
int flag;
void search(int s1,int s2,int c[100][100],char a[101][101]){
	head++;
	if(flag==1){
		return;
	}
	if(s1+1<h && c[s1+1][s2]==0 && a[s1+1][s2]=='#'){
		q[tail]=s1+1;
		q2[tail++]=s2;
		c[s1+1][s2]=1;
	}
	if(s1-1>=0 && c[s1-1][s2]==0 && a[s1-1][s2]=='#'){
		q[tail]=s1-1;
		q2[tail++]=s2;
		c[s1-1][s2]=1;
	}
	if(s2+1<w && c[s1][s2+1]==0 && a[s1][s2+1]=='#'){
		q[tail]=s1;
		q2[tail++]=s2+1;
		c[s1][s2+1]=1;
	}
	if(s2-1>=0 && c[s1][s2-1]==0 && a[s1][s2-1]=='#'){
		q[tail]=s1;
		q2[tail++]=s2-1;
		c[s1][s2-1]=1;
	}
	if(tail==head){
		flag=1;
		return;
	}
	else{
		search(q[head],q2[head],c,a);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[101][101]={0};
		int i,j;
		scanf("%d%d",&h,&w);
		for(i=0;i<h;i++){
			scanf("%s",a[i]);
		}
		int check[100][100]={0};
		int count=0;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(check[i][j]==0 && a[i][j]=='#'){
					check[i][j]=1;
					count++;
					flag=0;
					tail=0;
					head=-1;
					search(i,j,check,a);
				}
			}
		}
		printf("%d\n",count);
	}
}
