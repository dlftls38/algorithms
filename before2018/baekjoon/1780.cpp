#include <stdio.h>
int a[3000][3000];
int q=0;
int w=0;
int e=0;
void dq(int y_f, int y_l,int x_f, int x_l, int n){
	int i,j;
	int sum1=0;
	int sum2=0;
	int sum3=0;
	for(i=y_f;i<y_l;i++){
		for(j=x_f;j<x_l;j++){
			if(a[i][j]==-1) sum1++;
			else if(a[i][j]==0) sum2++;
			else sum3++;
		}
	}
	if(sum1==n*n){
		q++; 
	}
	else if(sum2==n*n){
		w++;
	}
	else if(sum3==n*n){
		e++;
	}
	else{
		dq(y_f,y_f+n/3,x_f,x_f+n/3,n/3);
		dq(y_f,y_f+n/3,x_f+n/3,x_f+n/3*2,n/3);
		dq(y_f,y_f+n/3,x_f+n/3*2,x_l,n/3);
		dq(y_f+n/3,y_f+n/3*2,x_f,x_f+n/3,n/3);
		dq(y_f+n/3,y_f+n/3*2,x_f+n/3,x_f+n/3*2,n/3);
		dq(y_f+n/3,y_f+n/3*2,x_f+n/3*2,x_l,n/3);
		dq(y_f+n/3*2,y_l,x_f,x_f+n/3,n/3);
		dq(y_f+n/3*2,y_l,x_f+n/3,x_f+n/3*2,n/3);
		dq(y_f+n/3*2,y_l,x_f+n/3*2,x_l,n/3);
	}
}
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	dq(0,n,0,n,n);
	printf("%d\n%d\n%d\n",q,w,e);
}
