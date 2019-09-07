#include <stdio.h>

int N;
void f(int n, int a, int b, int left){

	if (n == 1){
		
		printf("%d %d\n", a, b);

	}

	else{

		f(n - 1, a, left, b);

		f(1, a, b, left);

		f(n - 1, left, b, a);

	}

}

int main(){
	scanf("%d", &N);
	int a[1000]={0};
	a[0]=1;
	int i,j;
	int tail=1;
	for (i = 1; i <= N; ++i){
		for(j=0;j<tail;j++){
			a[j]*=2;
		}
		for(j=0;j<tail;j++){
			if(a[j]>9){
				a[j+1]++;
				a[j]-=10;
				if(j==tail-1){
					tail++;
				}
			}
		}
	}
	a[0]--;
	for(i=tail-1;i>=0;i--){
		printf("%d",a[i]);
	}
	printf("\n");
	if(N<=20)
		f(N, 1, 3, 2);

}
