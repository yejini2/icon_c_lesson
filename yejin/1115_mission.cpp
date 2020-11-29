#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int misson1() {

	char s1[20];
	char* s2 = (char*)malloc(sizeof(char) * 20);

	printf("첫번째 단어를 입력하세요:");
	scanf("%s", s1);

	printf("두번째 단어를 입력하세요:");
	scanf("%s", s2);

	strcat(s1, s2);
	printf("%s\n", s1);
	
	free(s2);

	return 0;

}

int mission2() {

	char s0[40];

	printf("문장을 입력해주세요:");
	scanf("%[^\n]s", s0);

	char* ptr0 = strtok(s0, " ");
	int count = 0;

	while (ptr0 != NULL) {
		ptr0 = strtok(NULL, " ");
		count++;
	}

	printf("%d\n", count);

	return 0;
}

int mission3() {

	char s1[40];
	char s2;

	printf("문장을 입력하세요:");
	scanf("%[^\n]s", s1);

	printf("문자를 입력하세요:");
	scanf(" %c", &s2);



	int count = 0;

	char* ptr = strchr(s1, s2);

	while (ptr != NULL) {
		ptr = strchr(ptr + 1, s2);
		count++;
	}

	printf("%d\n", count);

	return 0;

}
int mission4() {

	char s1[100];
	scanf("%s", s1);

	int l = strlen(s1);
	int* count = (int*)malloc(sizeof(int) * l);

	//대문자 >> 소문자로
	for (int i = 0; i < l; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z') {
			s1[i] = s1[i] + 32;
		}
	}

	//각 문자의 개수를 세서 count배열에 넣기
	for (int i = 0; i < l; i++) {
		char* ptr = strchr(s1, s1[i]);
		int c = 0;
		while (ptr != NULL) {
			ptr = strchr(ptr + 1, s1[i]);
			c++;
		}
		count[i] = c;
	}

	// count배열에서 가장 큰 숫자의 위치 찾기
	int max = count[0];
	int num = 0;

	for (int i = 0; i < l; i++) {
		if (count[i] > max) {
			max = count[i];
			num = i;
		}

	}

	//소문자를 대문자로 출력
	printf("%c\n", s1[num] - 32);

	//랜덤으로 출력하는 것은 못했습니다..

	return 0;

}