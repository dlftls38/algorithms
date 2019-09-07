#include <stdio.h>
#include <cstring>
#include <algorithm>
const int MAX = 100000;
char str[MAX * 2 + 2];
int pal[MAX * 2 + 2], len;
using namespace std;

int palindrome() {
	len = strlen(str);
	int c=0, r=0;
	for (int i = 0; i < len; i++) {
		int mirr = 2 * c - i;
		if (i < r)
			pal[i] = min(r - i, pal[mirr]);
		while (i - pal[i] > 0 && i + pal[i] < len && str[i - pal[i] - 1] == str[i + pal[i] + 1]) pal[i]++;
		if (pal[i] + i > r) {
			r = pal[i] + i;
			c = i;
		}
	}
	int ret = 0;
	for (int i = 0; i <= len; i++) {
		int curLen = pal[i];
		if (i % 2 == 0 && pal[i] % 2 == 1) curLen++;
		ret = max(ret, curLen);
	}
	return ret;
}

int main() {
	scanf("%s", str);
	len = strlen(str);
	len = len * 2 + 1;
	for (int i = len; i >= 0; i--) {
		if (i % 2 == 0) str[i] = '#';
		else str[i] = str[i / 2];
	}
	printf("%d", palindrome());
	return 0;
}
