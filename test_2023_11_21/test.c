#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ�,����'\0'
//	while (*dest++ = *src++)
//	{
//	;
//	
//	}
//	
//	return ret;
//	//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
char* my_strcat(char* dest,const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//1.�ҵ�'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.������dest����
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}