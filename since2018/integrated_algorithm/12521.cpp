#include <cstdio>
#include <cstring>

char a[128];

int main() {
	int tc, tcn;
	scanf("%d", &tcn);
	for (tc = 1; tc <= tcn; tc++) {
		int i, j, k, l, n;
		scanf("%s", a);
		n = strlen(a);
		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++) {
				l = 0;
				for (k = 0; i + k < j && j + k < n && l < 2 && a[i + k] == a[j + k]; k++){
					if (a[i + k] == 'a' || a[i + k] == 'e' || a[i + k] == 'i' || a[i + k] == 'o' || a[i + k] == 'u') l++;	
				}
				if (l < 2) continue;
				while (i + k < j && a[i + k] != 'a' && a[i + k] != 'e' && a[i + k] != 'i' && a[i + k] != 'o' && a[i + k] != 'u') k++;
				if (i + k < j) break;
			}
			if (j < n) break;
		}
		printf("Case #%d: %s\n", tc, i < n ? "Spell!" : "Nothing.");
	}
	return 0;
}

