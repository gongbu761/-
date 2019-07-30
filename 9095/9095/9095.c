/*정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.

1+1+1+1
1+1+2
1+2+1
2+1+1
2+2
1+3
3+1
정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 정수 n이 주어진다. n은 양수이며 11보다 작다.

출력
각 테스트 케이스마다, n을 1, 2, 3의 합으로 나타내는 방법의 수를 출력한다.*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 
int main(void) {

	int size;
	scanf("%d", &size);

	int* numPtr = (int*)malloc(sizeof(int) * size);    // (int 크기 * 입력받은 크기)만큼 동적 메모리 할당
	

	int i = 0;
	int j = 0; 
	for (i = 0; i < size; i++)    // 입력받은 크기만큼 반복
	{
		scanf("%d", &numPtr[i]); // 인덱스로 접근하여 값 할당
	 
		 
	}
	int* countPtr = (int*)malloc(sizeof(int) * 11);
	countPtr[0] = 0;
	countPtr[1] = 1;
	countPtr[2] = 2;
	countPtr[3] = 4;

	for (i = 0; i < size; i++)
	{
		for (j = 4; j <= 11; j++) {
			countPtr[j] = countPtr[j - 1] + countPtr[j - 2] + countPtr[j - 3];
		}

	}

	for (i = 0; i < size; i++)
	{
		printf("%d\n", countPtr[numPtr[i]]);
	}

	free(numPtr);
	free(countPtr);
	
	 


}