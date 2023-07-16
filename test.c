#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x=0;
	int i = 1;
	for (i; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d ",i);
	}
	/*if (x > 0 && x <= 100)
	{
		if (x % 2 == 1)
			printf("%dweijishu ", x);
		if (x % 2 == 0)
			printf("%dweioushu", x);

	}
	else
		printf("error");*/
	return 0;
}
