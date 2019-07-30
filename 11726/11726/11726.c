/*
2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다.


x=1부터 n까지 시그마 (nCx(n-x))=>왜이렇게 어렵게 생각했나몰라..
*/

#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int D[1001];
//피보나치수열과 비슷
int dp(int n) {
	if (n <= 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else if (n == 3) {
		return 3;
	}
	if (D[n] != 0) {
		// 이미 계산된 값
		return D[n];
	}
	else {
		return D[n] = (dp(n - 1) +  dp(n - 2)) % 10007;
		//자료형 숫자 오버해서 나눠줘야함
	}
}
int main(void) {

	int n = 0;
	scanf("%d", &n);
	printf("%d", dp(n));

	return 0;
}
 