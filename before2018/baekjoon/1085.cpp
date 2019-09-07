#include <stdio.h>
int abs(int a,int b){
	if(a-b>=0) return a-b;
	else return b-a;
}
int main(){
	int x,y,w,h,min=100000;
	scanf("%d%d%d%d",&x,&y,&w,&h);
	if(min>abs(x,w)) min=abs(w,x);
	if(min>abs(x,0)) min=abs(x,0);
	if(min>abs(y,h)) min=abs(y,h);
	if(min>abs(y,0)) min=abs(y,0);
	printf("%d",min);
}
