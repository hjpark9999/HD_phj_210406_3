#include <stdio.h>

void main()
{
	
	float PI = 3.141592;
	float area, circ;
	int r;
	
	
	scanf_s("%d", &r);

	area = PI * r * r;
	circ = PI * 2 * r;

	printf("PI=%f�̰�, ���ǳ���=%f, ���� �ѷ�=%f", PI, area, circ);
	fgetc(stdin);




}