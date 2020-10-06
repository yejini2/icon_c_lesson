#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//misson 1

	int A, B;
	
	scanf("%d %d", &A, &B);

	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);


	printf("\n");
	//misson 2
	
	int C;

	scanf("%d %d %d", &A, &B, &C);
	
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	printf("\n");
	//misson 3

	int a, b;
	int n1, n2, n3, n4;


	scanf("%d", &a);
	scanf("%d", &b);


	
	n1 = a * (b % 10);
	n2 = a * (b / 10 % 10);
	n3 = a * (b / 100);
	n4 = a * b;



	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
	printf("%d\n", n4);


	return 0;

}