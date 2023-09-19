#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入4个整数，按由小到大排序
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int u = 0;
	int tmp = 0;
	scanf("%d%d%d%d" , &x, &y, &z, &u);
	int arr[] = { x,y,z,u };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}