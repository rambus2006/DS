//실습2-3
#include <stdio.h>
#include<stdlib.h>
#define SIZE 1000000


int main(void) {
	//정적 메모리 할당
	/*int a[SIZE] = {10,}; //배열a는 4Mb 크기를 요구함
	printf("%d\n", a[0]);
	return 0;*/

	//동적 메모리 할당
	int* a = (int*)malloc(sizeof(int) * SIZE);
	a[0] = 10;
	printf("%d\n", a[0]);
	free(a);

	return 0;
}