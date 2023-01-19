#include<stdio.h>
int main() {
	int htime, mtime, min;
	scanf("%d %d", &htime, &mtime);
	scanf("%d", &min);

	mtime += min;
	if (mtime >= 60) {
		htime = htime + mtime / 60;
		mtime %= 60;
		if (htime >= 24) {
			htime %=24;
		}
	}
	else if (htime >= 24) {
		htime %= 24;
	}
	printf("%d %d", htime, mtime);
}