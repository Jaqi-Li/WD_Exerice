#include<stdio.h>
#include<malloc.h>
int main()
{
	/*����һ����������Ȼ�������Ӧ��С�ռ��ڴ棬Ȼ���ȡһ���ַ�����
	�ַ��������볤��С������������������С��������������ַ�������
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