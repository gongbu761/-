/*���� 4�� 1, 2, 3�� ������ ��Ÿ���� ����� �� 7������ �ִ�. ���� ��Ÿ�� ���� ���� 1�� �̻� ����ؾ� �Ѵ�.

1+1+1+1
1+1+2
1+2+1
2+1+1
2+2
1+3
3+1
���� n�� �־����� ��, n�� 1, 2, 3�� ������ ��Ÿ���� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���� n�� �־�����. n�� ����̸� 11���� �۴�.

���
�� �׽�Ʈ ���̽�����, n�� 1, 2, 3�� ������ ��Ÿ���� ����� ���� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 
int main(void) {

	int size;
	scanf("%d", &size);

	int* numPtr = (int*)malloc(sizeof(int) * size);    // (int ũ�� * �Է¹��� ũ��)��ŭ ���� �޸� �Ҵ�
	

	int i = 0;
	int j = 0; 
	for (i = 0; i < size; i++)    // �Է¹��� ũ�⸸ŭ �ݺ�
	{
		scanf("%d", &numPtr[i]); // �ε����� �����Ͽ� �� �Ҵ�
	 
		 
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