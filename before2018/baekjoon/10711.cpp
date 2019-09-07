#include <stdio.h>
int q[1100000],q2[1100000],top,q3[1100000],q4[1100000],top2;
int main(){
	int h,w,i,j,count,count2,day=0,p;
	char a[1004][1004],b[1004][1004];
	scanf("%d%d",&h,&w);
	for(i=0;i<h;i++){
		scanf("%s",a[i]);
		for(j=0;j<w;j++){
			if(a[i][j]!='.'){
				b[i][j]=a[i][j];
				if(a[i][j]-48!='9'){
					q[top]=i;
					q2[top++]=j;	
				}
			}
		}
	}
	while(1){
		count2=100;
		p=0;
		for(i=0;i<top;i++){
			count=a[q[i]][q2[i]]-48;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]+1][q2[i]]=='.') count--;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]][q2[i]+1]=='.') count--;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]-1][q2[i]]=='.') count--;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]][q2[i]-1]=='.') count--;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]+1][q2[i]+1]=='.') count--;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]+1][q2[i]-1]=='.') count--;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]-1][q2[i]+1]=='.') count--;
			if(q[i]>=0 && q2[i]>=0 && q[i]<=h-1 && q2[i]<=w-1 && a[q[i]-1][q2[i]-1]=='.') count--;
			if(count<=0){
				count2=0;
				b[q[i]][q2[i]]='.';
				q3[top2]=q[i];
				q4[top2++]=q2[i];
				p++;
			}
			else{
				q[i-p]=q[i];
				q2[i-p]=q2[i];
			}
		}
		top-=p;
		for(i=0;i<top2;i++){
			a[q3[i]][q4[i]]=b[q3[i]][q4[i]];
		}
		top2=0;
		if(count2==100) break;
		else day++;
	}
	printf("%d",day);
}
