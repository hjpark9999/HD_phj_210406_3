#include <stdio.h>

void main()
{
	
	float PI = 3.141592;
	float area, circ;
	int r;
	
	printf("�������� ������ �Է��� �ּ���:");
	scanf_s("%d", &r);
	fseek(stdin, 0, SEEK_END);

	area = PI * r * r;
	circ = PI * 2 * r;

	printf("PI=%.2f, ���ǳ���=%.2f, ���� �ѷ�=%.2f", PI, area, circ);
	fgetc(stdin);




}