#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int count_1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	int count = count_1(x);
	printf("%d", count);
	
	
	return 0;
}
