#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//응용문제

	// medium

	char c;
	printf("문자를 입력하시오: ");
	scanf("%c", &c);

	printf("아스키코드 : %d\n", c);





	// hard

	float area;
	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf("%f", &area);

	float result = area / 3.3058;

	printf("%.2f제곱미터는 %.2f평입니다.", area, result);

	return 0;


}