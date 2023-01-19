#include<stdio.h>
int main(void) {
	int num;
	scanf("%d", &num);
	if (num >= 90 && 100 >= num) {
		printf("A");
	}
	else if (num >= 80 && 89 >= num) {
		printf("B");
	}
	else if (num >= 70 && 79 >= num) {
		printf("C");
	}
	else if (num >= 60 && 69 >= num) {
		printf("D");
	}
	else
		printf("F");
}