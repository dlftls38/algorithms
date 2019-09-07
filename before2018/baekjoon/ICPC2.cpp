#include<stdio.h>
int main(){
	int N;
	float a,b;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%f %f",&a,&b);
		printf("%.2f\n",a/b);
	}
}
