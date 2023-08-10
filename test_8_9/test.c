#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//冒泡排序
int main()
{
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//假设这一趟数据已经有序
		//每一趟冒泡排序
		for (j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] > arr[j+1]) 
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟冒泡排序未有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
	

