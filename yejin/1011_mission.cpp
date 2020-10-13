#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//mission 1

	int a,b ;

	for (int i = 0;; i++) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		printf("%d\n", a + b);
	}

	//mission 2

	int n;

	scanf("%d", &n);
	
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}

	//mission 3

	int x, y;
	int quadrnt;

	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0)
		quadrnt = 1;
	else if (x < 0 && y>0)
		quadrnt = 2;
	else if (x < 0 && y < 0)
		quadrnt = 3;
	else
		quadrnt = 4;

	printf("%d\n", quadrnt);

	//mission 4

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n - i);j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");

	}

	//mission 5

	int h, m;
	int h0, m0; // 알람 설정 시간

	scanf("%d %d", &h, &m);

	if (m >= 45) {
		m0 = m - 45;
		h0 = h;
	}
	else if (m < 45) {
		m0 = 60 - (45 - m);
		if (h == 0) {
			h0 = 23;
		}
		else {
			h0 = h - 1;
		}

	}

	printf("%d %d", h0, m0);
	



	return 0;
}