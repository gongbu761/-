#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main() {
	int a = 0;
	scanf("%d", &a);
	int t = 0;
	int n = 0; // 출력갯수

	for (t = 0;t < a; t++) { //입력한 갯수만큼 줄 출력
		//마지막은 전부 출력
		n = 2 * a - 1;
		if (t == a - 1) {
			while (n > 0) {
				printf("*");
				n--;
			}
			break;
		}
		 

		while (n > 0) {

			if (n == a - t) {
				printf("*");break;
			}
			else if (n == a + t) {

				printf("*"); 
			}
			else {
				printf(" ");
			}
			n--;
		}

		printf("\n");
	}

	return 0;
}
