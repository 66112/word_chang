#include <stdio.h>
#include <assert.h>
#include <string.h>
int my_strlen(const char * p)         //计算字符串长度
{
	int count = 0;
	assert(p != NULL);
	while (*p++)
	{
		count++;
		//p++;
	}
	return count;
}
void reverse_p(char* left, char* right)    //交换左右两端
{
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void reverse(char* p)
{
	char *cur = p;
	char *left = p;
	char *right = p + my_strlen(p) - 1;
	assert(p != NULL);
	reverse_p(left, right);
	while (*cur)
	{
		char *start = cur;
		while ((*cur != ' ') && (*cur != '\0'))
		{
			cur++;
		}
		reverse_p(start, cur - 1);
		if (*cur == ' ')
			cur++;
	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	//int ret = my_strlen(arr);
	printf("%s\n", arr);
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strlen(const char * str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("len = %d\n", len);
//	return 0;
//}