#include<stdio.h>
int main() {
	int N, max=-100000, min=100000;
	int num[1000000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}
	printf("%d %d",min, max);
}