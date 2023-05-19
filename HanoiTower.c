#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) { //n:������ ����, a : ��ߺ���, b:��������, c: �������� 
	if (n == 1) printf("����%d,%c->%c\n",n, a,c);
	else {
		HanoiTower(n - 1, a,c,b); //c�� ������ 
		printf("����%d,%c->%c\n", n, a, c);  //4���� c�� �̵�
		HanoiTower((n - 1), b, a, c); // a�� ������
	}
}
int main(void) {
	int n = 4;

	HanoiTower(n,'A', 'B', 'C');
	return 0;
}