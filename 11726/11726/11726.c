/*
2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� 2��n ũ���� ���簢���� ä��� ����� ���� 10,007�� ���� �������� ����Ѵ�.


x=1���� n���� �ñ׸� (nCx(n-x))=>���̷��� ��ư� �����߳�����..
*/

#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int D[1001];
//�Ǻ���ġ������ ���
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
		// �̹� ���� ��
		return D[n];
	}
	else {
		return D[n] = (dp(n - 1) +  dp(n - 2)) % 10007;
		//�ڷ��� ���� �����ؼ� ���������
	}
}
int main(void) {

	int n = 0;
	scanf("%d", &n);
	printf("%d", dp(n));

	return 0;
}
 