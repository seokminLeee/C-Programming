#include<stdio.h>

int main(void)
{
	int n, d, result;

	printf("���ڿ� �и� �Է��Ͻʽÿ�:");
	scanf("%d%d", &n, &d);
	if (d == 0)
	{
		printf("0���� �������� �����ϴ�.\n");
	}
	else
	{
		result = n / d;
		printf("�����%d�Դϴ�.\n", result);
	}

	return 0;
}