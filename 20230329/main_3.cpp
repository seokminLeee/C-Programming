#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int money, change;
	int price, c5000, c1000, c500, c100;

	printf("���� ���� �Է��ϼ���:");
	scanf("%d",&price);

	printf("������ �ݾ��� �Է��ϼ���:");
	scanf("%d",&money);


	change = money - price;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	printf("�Ž������� ������ �����ϴ� \nõ����: %��\n",c1000);
	printf("����� ����: %d�� \n",c500);
	printf("��� ����: %d��]\n",c100);
	return 0;
}