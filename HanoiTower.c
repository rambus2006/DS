#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) { //n:원판의 개수, a : 출발변수, b:경유변수, c: 도착변수 
	if (n == 1) printf("원판%d,%c->%c\n",n, a,c);
	else {
		HanoiTower(n - 1, a,c,b); //c가 경유지 
		printf("원판%d,%c->%c\n", n, a, c);  //4번을 c로 이동
		HanoiTower((n - 1), b, a, c); // a가 경유지
	}
}
int main(void) {
	int n = 4;

	HanoiTower(n,'A', 'B', 'C');
	return 0;
}