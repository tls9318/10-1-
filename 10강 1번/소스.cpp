#include <stdio.h>
#pragma warning(disable:4996)

double change(int a);

int main(void)
{
	double inch;
	printf("��ġ�� �Է��ϼ���. ");
	scanf_s("%lf", &inch);
	printf("%lf��ġ�� %.2fcm�Դϴ�.\n", inch, change(inch));

	return 0;

}

double change(int a)
{
	double cm;
	cm = (a * 2.54);
	return (cm);
}