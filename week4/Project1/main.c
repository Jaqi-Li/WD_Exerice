#include<stdio.h>

void change(int* i)
{
	*i /= 2;
}

int main()
{
	/*����һ�����������������i��
	ͨ���Ӻ���change���������ı���i��2��Ȼ���ӡi��
	������������Ϊ10����ӡ��5����������Ϊ7����ӡ��3*/

	int i;
	scanf_s("%d", &i);
	change(&i);
	printf("%d", i);

	return 0;
}