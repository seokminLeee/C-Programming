#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double w = 0;
	double h = 0;
	double area;
	double perimeter;

	printf("���ο� ���θ� �Է����ּ���:");
	scanf("%lf", w);
	printf("���ο� ���θ� �Է����ּ���:");
	scanf("%lf", h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ����: %lf\n", area); 
	printf("�簢���� �ѷ�: %lf\n", perimeter);

	return 0;
}