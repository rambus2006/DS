#include <stdio.h>

int main(void) {
	char a[24] = { 'P','r','a','c','t','i','c','e',' ',
		'm','a','k','e','s',' ','p','e','r','f','e','c'
		,'t','.','\0' };
	char b[5][10] = { {' ',' ',' ',' ','A','\0'},{' ',' ',' ','A','B','C','\0'} ,{' ',' ','A','B','C','D','E','\0'}
					 ,{' ','A','B','C','D','E','F','G','\0'},{'A','B','C','D','E','F','G','H','I','\0'} };
	char c[10][5];
	//1번
	for (int i = 0; i < 24; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
	//2번
	for (int j = 24; j >= 0; j--) {
		printf("%c", a[j]);
	}
	printf("\n");
	//3번
	for (int i = 0; i < 24; i++) {
		if (a[i] == ' ') {
			printf("\n");
			i++;
		}
		printf("%c", a[i]);
	}
	printf("\n");
	//4번
		for (int i = 10; i >=0; i--) {
			for (int j = 5; j >=0; j--) {
				printf("%c", b[i][j]);
			}
			printf("\n");
		}
	//5번
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			c[j][i] = b[j][i];
		}
		
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c", c[j][i]);
		}
		printf("\n");
	}
	

	return 0;
}
