#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	 while(*str != '\0')
	{
		count++;
		*str++;
	}
		
	
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}