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
	* 输入一个学生的学号，姓名，性别，用结构体存储，
	通过scanf读取后，然后再通过printf打印输出
	*/

	struct Student student;
	int ret;
	ret = scanf("%d %s %c", &student.num, student.name,&student.sex);
	printf("%d %s %c", student.num, student.name, student.sex);

	return 0;
}