#include<stdio.h>
int main() {
	int a[10000];
	for (int i = 1; i < 10001; i++) {
		a[i] = 0;
	}
	for (int i = 1; i < 10001; i++) {
		a[value(i)] = i;
	}
	for (int i = 1; i < 10001; i++) {
		if (a[i] == 0) {
			printf("%d\n", a[i]);
		}
	}
	return 0;
}

int value(int n) {
	int n1000, n100, n10, n1;
	n1000 = n / 1000;
	n100 = n / 100 % 10;
	n10 = n / 10 % 10;
	n1 = n % 10;

	n = n + n1000 + n100 + n10 + n1;
	return n;
}
