#include <stdio.h>
int a[100001],top,min=1000000,point[5][5]={{0,2,2,2,2},{0,1,3,4,3},{0,3,1,3,4},{0,4,3,1,3},{0,3,4,3,1}};
void gogo(int now,int count,int foot1,int foot2){
	if(now==top){
		if(min>count){
			min=count;
		}
		return;
	}
	if(point[foot1][a[now]]>point[foot2][a[now]]){
		gogo(now+1,count+point[foot2][a[now]],foot1,a[now]);
	}
	else if(point[foot1][a[now]]<point[foot2][a[now]]){
		gogo(now+1,count+point[foot1][a[now]],a[now],foot2);
	}
	else if(foot1!=foot2 && point[foot1][a[now]]==point[foot2][a[now]]){
		gogo(now+1,count+point[foot1][a[now]],a[now],foot2);
		gogo(now+1,count+point[foot2][a[now]],foot1,a[now]);
	}
	else if(foot1==foot2 && point[foot1][a[now]]==point[foot2][a[now]]){
		gogo(now+1,count+point[foot1][a[now]],a[now],foot2);
	}
}
int main(){
	while(1){
		scanf("%d",&a[top++]);
		if(a[top-1]==0) break;
	}
	top-=1;
	gogo(0,0,0,0);
	printf("%d",min);
}
