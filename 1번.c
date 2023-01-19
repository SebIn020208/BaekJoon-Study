#include<stdio.h>
int main() {
	int N,i,sum;
	int arr[100];
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &sum);
		arr[i] = sum;
		
	}
	int a,count = 0;
	scanf("%d", &a);
	for (i = 0; i < N; i++) {
		if (arr[i] == a) {
			count++;
		}
	}
	printf("%d", count);
}