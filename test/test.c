#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}



int main()
{
	int sum = 0;
	int num1 = 20;
	int num2 = 20;
	int a = 50;
	int b = 50;
	sum = add(num1, num2);
	printf("sum=%d\n", sum);
	sum = add(a, b);
	printf("sum=%d\n", sum);
	return 0;

}