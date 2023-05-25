#include <stdio.h>
#include <math.h>
#include <time.h>
/*다음 코드를 ‘PrimeNumber.c’로 작성하고 a ~ b 구간의 소수 구하기 2가
지 방법에 대하여 효과성을 확인하시오.*/
int main(void) {
	int i, j, k = 0, d; //정수형 i,j,k,d설정 
	int a = 50000, b = 51000; //[a ~ b 구간 설정]
	clock_t t1, t2; //clock_t함수 : 시간과 관련된 함수, time.h 헤더 파일 안에 정의되어있다. 
					//코드 실행 시간을 측정한다. 
				
	// [O(n∙m) 방법(n은 구간 크기, m은 소수 판단을 위한 반복 횟수)]
	t1 = clock(); //clock() 함수는 구현 정의 기간 시작 이후로 프로세스 호출과 관련된 프로그램이 사용한 프로세서 시간의 근사값을 리턴합니다. 
	for (i = a; i <= b; i++) { //i=5000, i는 51000이 될 때까지 반복 
		d = i / 2; //d는 i
		for (j = 2; j <= d; j++) { //j=2,j=d=i,j++
			if (i % j == 0) { //i를 j로 나눈 값의 나머지가 0이라면 
				k = 1; //k는 1이다. 
				break; //멈추기
			}
		}
		if (k == 0) printf("%d, ", i); //만약 k가 0이라면 i를 출력 
		k = 0; //k는 0
	}
	t2 = clock();
	printf("\nO(n∙m) 방법: %.3lf초 소요\n\n", (double)(t2 - t1) / 1000);

	
	//[ O(n∙sqrt(m)) 방법(n은 구간 크기, sqrt(m)은 소수 판단을 위한 반복 횟수)]
	t1 = clock(); //clock() 함수는 구현 정의 기간 시작 이후로 프로세스 호출과 관련된 프로그램이 사용한 프로세서 시간의 근사값을 리턴합니다. 
	k = 0; //k는 0
	for (i = a; i <= b; i++) { //i는 a, i 는 b보다 작을 때 반복 ,i증감
		if (i % 2 == 0) continue; //만약 i가 짝수라면 어디로 이동?
		d = (int)sqrt((double)i); //sqrt 괄호 안의 수가 음수라면 NUM!오류값이 반환됨
		for (j = 2; j <= d; j++) {//j는 2, j는 d까지 반복, j증감 
			if (i % j == 0) { //i를 j로 나눴을 때 0이면 
				k = 1; //k는 1
				break; //for문 으로 이동 
			}
		}
		if (k == 0) printf("%d, ", i); //i 출력 
		k = 0;
	}
	t2 = clock(); //t2 가 런타임 계산 

	printf("\nO(n∙√m) 방법: %.3lf초 소요\n\n", (double)(t2 - t1) / 1000);

	return 0;
}