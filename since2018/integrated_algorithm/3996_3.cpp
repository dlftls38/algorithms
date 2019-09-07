#include<stdio.h>
int main() {
	long long n, k;
	scanf("%lld%lld", &n, &k);
	long long ans = 0;
	long long cnt = 1;
	long long tmp = 0;
	while (n) {
		tmp += cnt*(k - 1);
		if ((n / k) % k) {
			ans =tmp;
		}
		else {
			ans += cnt*(n%k);
		}
		
		n = n / k / k;
		cnt *= k;
	}
	printf("%lld", ans+1);
}
