#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	//mission 1
	for (int i = 1; i <= 100; i++) {

		if (i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz\n");
			
		}
		else if (i % 3 == 0) {
			printf("Fizz\n");
		}
		else if (i % 5 == 0) {
			printf("Buzz\n");
		}
		else {
			printf("%d\n", i);
		}

		}

	//mission 2

	char ch;
	float f;

	printf("문자를 입력하세요:");
	scanf("%c", &ch);
	printf("실수를 입력하세요:");
	scanf("%f", &f);

	printf("%p\n", &ch);
	printf("%p\n", &f);


	//mission 3
	int num1 = 10;
	int num2 = 20;
	int* p1;
	int* p2;

	p1 = &num1;
	p2 = &num2;

	*p1 = *p1 - 1;
	*p2 = *p2 - 1;
	printf("%d %d\n", *p1,*p2);
	
	int sw = *p1;
	*p1 = *p2;
	*p2 = sw;

	printf("%d %d\n", *p1, *p2);




	return 0;
}