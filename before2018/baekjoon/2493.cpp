#include <stdio.h>
int position[500000];
int height[500000];
int top;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a,b;
	scanf("%d",&a);
	printf("0 ");
	height[top++]=0;
	for(i=1;i<n;i++){
		scanf("%d",&b);
		if(b<=a){
			position[top]=i;
			height[top++]=a;
			printf("%d ",position[top-1]);
		}
		else{
			while(b>height[top-1] && height[top-1]>0){
				height[top-1]=0;
				position[--top]=0;
			}
			printf("%d ",position[top-1]);
		}
		a=b;
	}
}
