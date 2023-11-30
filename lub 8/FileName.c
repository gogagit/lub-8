#include <stdio.h>
#include <locale.h>
main() {
	setlocale(LC_ALL, "RUS");
	int n;
	int res = 0;
	printf("¬ведите число n = ");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		res = res + (n + i) * (n + i);
		if (i == n) {
			printf("–езультат: %d", res);
		}
	}
}