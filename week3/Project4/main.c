#include<stdio.h>
#include<string.h>
int main()
{
	/*
	* ��ȡһ���ַ������ַ������ܺ��пո񣬽��ַ�����ת��
	ԭ�����ַ�������ת���ַ�����ͬ�����0��
	ԭ�ַ���С����ת���ַ������-1��������ת���ַ������1��
	�������� hello����ת����ַ���Ϊ olleh��
	��Ϊhello С�� olleh���������-1
	*/
	char input[20], reverse[20];

	fgets(input,20,stdin);
	/**
	*	scanf("%s",input);			ʹ��scanf��������������еĿո�  �����ո������ɨ��
	*	gets(input);				ʹ��gets����������Կո��Ҳ��������������	'\n'
	*   fgets(input,20,stdin);		ʹ��fgets����������Կո��ַ�������� '\n'����Ҫ���⴦��
	*								int len = strlen(input);
	*								input[len - 1] = '\0';
	*/
	int i, result, len = strlen(input);
	for (i = 0; i < len; ++i)
	{
		reverse[i] = input[len - i - 1];
	}
	reverse[i] = '\0';
	result = strcmp(input, reverse);
	if (0 == result)
	{
		printf("0");
	}
	else if (0 > result)
	{
		printf("-1");
	}
	else
	{
		printf("1");
	}

	return 0;
}