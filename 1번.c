#include<stdio.h>
int main() {
	int a[100], n;
	scanf("%d", &n);
	long long sum(int *a, int n);
	return 0;
}

long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}

