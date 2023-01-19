#include<stdio.h>

int main() {
	int sub;
	int max = 0;
	float avg = 0;
	scanf("%d", &sub);
	int score[1000];
	for (int i = 0; i < sub; i++) {
		scanf("%d", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}
	for (int i = 0; i < sub; i++) {
		avg += (float)score[i] / max * 100;
	}
	printf("%f\n", avg/sub);

}