#include<stdio.h>
int main(void) {
	int h, m, m1;
	scanf("%d %d", &h, &m);
	m1 = m - 45;
	if (m1 < 0) {
		h--;
		m1 = m1 + 60;
		if (h < 0) {
			h = 23;
		}
		printf("%d %d", h, m1);
	}
	else if (m1 >= 0) {
		printf("%d %d", h, m1);
	}
	
	
}