#include <bits/stdc++.h>

using namespace std;


long long k, b;

long long f(long long n) {
	if (n < k) {
		return n + 1;
	}
	long long x = 1, e, a = 1;
	while (x <= n / b) {
		x *= b;
		a *= k;
	}
	e = x * k;
	if (n >= e) {
		return f(e - 1);
	}
	return f(n % x) + (n / x) * a;
}

int main() {
	long long n;
	scanf("%lld%lld",&n,&k);
	b = k * k;
	printf("%lld",f(n));
}
