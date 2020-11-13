#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	//mission1
	int arr[5] = { 1,2,3,4,5 };

	int* p;

	p = arr;

	for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++) {
		p[i] += 2;
		printf("%d\n", p[i]);
	}
		
	//mission2
	int n;
	scanf("%d", &n);

	int* arrPtr = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		int numArr;
		scanf("%d", &numArr);
		arrPtr[i] = numArr;
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arrPtr[i];
	}

	printf("%d\n", sum);

	//mission3
	int array[] = { 1,2,3,4,5 };
	int* p1 = array;

	int sw[5] = { 1,2,3,4,5 };


	for (int i = 0; i < 5; i++) {
		p1[4 - i] = sw[i];

	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", array[i]);
	}




	return 0;
}