#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
//实现strlen函数
//计数器解法
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//不创建临时变量求字符串长度
int my_strlen(const char* str)
{
	
	assert(str != NULL);
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
		
		

	
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);
	return 0;
}