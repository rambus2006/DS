//�ǽ�2-3
#include <stdio.h>
#include<stdlib.h>
#define SIZE 1000000


int main(void) {
	//���� �޸� �Ҵ�
	/*int a[SIZE] = {10,}; //�迭a�� 4Mb ũ�⸦ �䱸��
	printf("%d\n", a[0]);
	return 0;*/

	//���� �޸� �Ҵ�
	int* a = (int*)malloc(sizeof(int) * SIZE);
	a[0] = 10;
	printf("%d\n", a[0]);
	free(a);

	return 0;
}