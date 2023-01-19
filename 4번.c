#include<stdio.h>
int main() {
	int N[9],max=-1,sum=0,i;
	for (i = 0; i <= 8; i++) {
		scanf("%d", &N[i]);
		if (N[i] > max) {
			max = N[i];
			sum = i;
		}
	}
	printf("%d\n", max);
	printf("%d", sum+1);
}