#include<stdio.h>

int main(void)
{
	int n, d, result;

	printf("분자와 분모를 입력하십시오:");
	scanf("%d%d", &n, &d);
	if (d == 0)
	{
		printf("0으로 나눌수는 없습니다.\n");
	}
	else
	{
		result = n / d;
		printf("결과는%d입니다.\n", result);
	}

	return 0;
}