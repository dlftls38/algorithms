#include <stdio.h>
int a[64][64];
void dq(int y_f, int y_l,int x_f, int x_l, int n){
	int i,j;
	int sum=0;
	for(i=y_f;i<y_l;i++){
		for(j=x_f;j<x_l;j++){
			sum+=a[i][j];
		}
	}
	if(sum==n*n){
		printf("1");
	}
	else if(sum==0){
		printf("0");
	}
	else{
		printf("(");
		dq(y_f,(y_f+y_l)/2,x_f,(x_l+x_f)/2,n/2);
		dq(y_f,(y_f+y_l)/2,(x_l+x_f)/2,x_l,n/2);
		dq((y_f+y_l)/2,y_l,x_f,(x_l+x_f)/2,n/2);
		dq((y_f+y_l)/2,y_l,(x_l+x_f)/2,x_l,n/2);
		printf(")");
	}
}
int main(){
	int n;
	int i,j;
	char input[64];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",input);
		for(j=0;j<n;j++){
			a[i][j]=input[j]-48;
		}
	}
	dq(0,n,0,n,n);
}
