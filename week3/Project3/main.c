#include<stdio.h>
#include<string.h>

int main()
{
	/*����N������NС�ڵ���100�����������2�ĳ��ִ�����*/

	int len, i, num, arr[100];
	printf("������Ҫ��������ֵĸ�����");
	scanf_s("%d", &len);

	num = 0;
	for (i = 0; i < len; ++i)
	{
		scanf_s("%d", &arr[i]);
		if (2 == arr[i])
		{
			num++;
		}
	}
	printf("\n%d", num);
	
}