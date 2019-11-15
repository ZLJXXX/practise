#define _CRT_SECURE_NO_WARNINGS
//1.实现strcpy
//2.实现strcat
//3.实现strstr
//4.实现strchr
//5.实现strcmp
//6.实现memcpy
//7.实现memmove
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//strlen的调用
//int main()
//{
//	char* str = "abcdefg";
//	printf("%d\n",strlen(str));
//	system("pause");
//	return 0;
//}
//函数实现strlen的功能
int my_strlen(const char* dest)
{
	int count = 0;
	assert(*dest != NULL);
	while (*dest)
	{
		count++;
		dest++;
	}
	return count;
}
int main()
{
	char* str = "abcdefg";
	my_strlen(str);
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}
//strcpy函数的调用
//int main()
//{
//	char arr[10] = {0};
//	char* str = "hello zhou";
//	strcpy(arr, str);
//	printf("%s\n", strcpy(arr, str));
//	system("pause");
//	return 0;
//}
//函数实现strcpy的功能
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(*src != NULL);
//	char* ret = dest;
//	/*while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//	while (*dest++ = *src++)
//	{
//	}
//	return ret;
//}
//int main()
//{
//	char arr[10] = { 0 }; 
//	char* str = "hello bit";
//	my_strcpy(arr, str);
//	printf("%s\n", my_strcpy(arr, str));
//	system("pause");
//	return 0;
//}

//strcat字符串补充函数的调用
//char* my_strcat(char* dest, const char* src)
//{
//	assert(*src != NULL);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char str[10] = "asd";
//	char* p = my_strcat(arr, str);
//	printf("%s\n", p);
//	system("pause");
//	return 0;
//}