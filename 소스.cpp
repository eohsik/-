#include<stdio.h>

int main()
{
	int x;
	float y = 0.0;

	for (x = 0; x < 100; x++)
		y+= 0.4;
	printf("0.4�� 100�� ���� ���: %f\n", y);
	
	return 0;
}