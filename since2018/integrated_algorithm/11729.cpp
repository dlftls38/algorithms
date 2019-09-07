#include <stdio.h>

int dp[21];

int cnt=0;

int arr[3][20];

void f(int n, int a, int b, int left){

	if (n == 1){

		printf("%d %d\n", a, b);

		cnt++;

	}

	else{

		f(n - 1, a, left, b);

		f(1, a, b, left);

		f(n - 1, left, b, a);

	}

}

int main(){

	int N;

	scanf("%d", &N);

	dp[1] = 1;

	for (int i = 2; i <= N; ++i){

		dp[i] = dp[i - 1] * 2 + 1;

	}

	printf("%d\n", dp[N]);

	f(N, 1, 3, 2);

}
