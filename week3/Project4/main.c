#include<stdio.h>
#include<string.h>
int main()
{
	/*
	* 读取一个字符串，字符串可能含有空格，将字符串逆转，
	原来的字符串与逆转后字符串相同，输出0，
	原字符串小于逆转后字符串输出-1，大于逆转后字符串输出1。
	例如输入 hello，逆转后的字符串为 olleh，
	因为hello 小于 olleh，所以输出-1
	*/
	char input[20], reverse[20];

	fgets(input,20,stdin);
	/**
	*	scanf("%s",input);			使用scanf函数会忽略输入中的空格  遇到空格则结束扫描
	*	gets(input);				使用gets函数不会忽略空格且不会读入输入最后的	'\n'
	*   fgets(input,20,stdin);		使用fgets函数不会忽略空格但字符串最后有 '\n'，需要特殊处理
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