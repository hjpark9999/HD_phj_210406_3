#include <stdio.h>

void main()
{
	
	float PI = 3.141592;
	float area, circ;
	int r;
	
	printf("지름값을 정수로 입력해 주세요:");
	scanf_s("%d", &r);
	fseek(stdin, 0, SEEK_END);

	area = PI * r * r;
	circ = PI * 2 * r;

	printf("PI=%.2f, 원의넓이=%.2f, 원의 둘레=%.2f", PI, area, circ);
	fgetc(stdin);




}