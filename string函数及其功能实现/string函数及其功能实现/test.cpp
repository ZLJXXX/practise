#define _CRT_SECURE_NO_WARNINGS
//1.ʵ��strcpy
//2.ʵ��strcat
//3.ʵ��strstr
//4.ʵ��strchr
//5.ʵ��strcmp
//6.ʵ��memcpy
//7.ʵ��memmove
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//strlen�ĵ���
//int main()
//{
//	char* str = "abcdefg";
//	printf("%d\n",strlen(str));
//	system("pause");
//	return 0;
//}
//����ʵ��strlen�Ĺ���
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
//strcpy�����ĵ���
//int main()
//{
//	char arr[10] = {0};
//	char* str = "hello zhou";
//	strcpy(arr, str);
//	printf("%s\n", strcpy(arr, str));
//	system("pause");
//	return 0;
//}
//����ʵ��strcpy�Ĺ���
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

//strcat�ַ������亯���ĵ���
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