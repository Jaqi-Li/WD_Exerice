#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student
{
	int num;
	char name[20];
	char sex;
};


int main()
{
	/*
	* ����һ��ѧ����ѧ�ţ��������Ա��ýṹ��洢��
	ͨ��scanf��ȡ��Ȼ����ͨ��printf��ӡ���
	*/

	struct Student student;
	int ret;
	ret = scanf("%d %s %c", &student.num, student.name,&student.sex);
	printf("%d %s %c", student.num, student.name, student.sex);

	return 0;
}