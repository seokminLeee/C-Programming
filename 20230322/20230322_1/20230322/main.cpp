#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("ù ��° ���ڸ� �Է��Ͻʽÿ�:");
	scanf("%d", &x);

	printf("�� ��° ���ڸ� �Է��Ͻʽÿ� : ");
	scanf("%d", &y);

	sum = x + y;
	printf("�μ��� ��: %d\n", sum);

	return 0;
}

