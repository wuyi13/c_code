#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	scanf("%d", &y);
//	printf("%d", y - (x - 1));
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	printf("%d是闰年", x);
//	else
//	printf("%d不是闰年", x);
//	return 0;
//}
typedef struct stu stu;
int main()
{
	
	struct stu {
		long int num;
		char name[20];
		char sex;
		char addr[20];



	}a = { 10101,"zhangshan",'M',"123 Beijing Road" };
	printf("num:%ld\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.addr);
	return 0;
}