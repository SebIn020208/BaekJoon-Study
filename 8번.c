#include<stdio.h>
#include<string.h>
int main() {
	int up = 1, score = 0;
	char quiz[80];
	int size;
	scanf("%d", &size);
	for (int i = 0; i < size; i++) {
		score = 0;
		up = 1;
		scanf("%s", quiz);
		for (int j = 0; j < strlen(quiz); j++) {
			if (quiz[j] == 'O') {
				score += up;
				up++;
			}
			else
				up = 1;
		}
		printf("%d\n", score);
	}
}