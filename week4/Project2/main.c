#include<stdio.h>
#include<malloc.h>
int main()
{
	/*输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，
	字符串的输入长度小于最初输入的整型数大小，最后输出输入的字符串即可
	*/

	int len;
	scanf_s("%d", &len);
	char* p = (char*)malloc(len);
	*p = getchar();
	if (NULL != p)
	{
		gets(p);
		puts(p);
	}
	else
	{
		printf("memory error!");
	}
	

	return 0;
}