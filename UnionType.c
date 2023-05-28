#include<stdio.h>
#include<string.h>
int main(void) {
	union uuu { //여러 개의 멤버가 같은 메모리 공간을 공유하는 데이터 구조입니다.union은 모든 멤버가 동시에 메모리를 차지하는 것이 아니라, 가장 큰 멤버의 크기에 맞춰서 메모리를 할당합니다. 이로 인해 union은 멤버들 사이에서 메모리를 공유할 수 있게 됩니다.
		int k; //4바이트
		char c; //1바이트이지만 구조체 패딩현상으로 인해 4바이트
		char a[5]; //5바이트(char 1개가 1바이트)
	} u1; //char 형 변수 1바이트
	strcpy(u1.a, "ABC");//strcpy는 문자열을 복사하는 함수,ABC 문자열을 u1.a 배열에 복사한다.
	printf("\nk = %d, c = %c, a = %s", u1.k, u1.c, u1.a);
	return 0;
}