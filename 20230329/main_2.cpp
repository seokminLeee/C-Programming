#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, result;
	printf("두개의 정수를 입력하십시오");
	scanf("%d + %d",&x,&y);

	result = x + y;
	printf(" %d + %d = %d", x, y, result);

	result = x - y;
	printf(" %d - %d = %d", x, y, result);
	result = x * y;
	printf(" %d * %d = %d", x, y, result);
	result = x / y;
	printf(" %d / %d = %d", x, y, result);
	result = x % y;
	printf(" %d %% %d = %d", x, y, result);
	return 0;



}