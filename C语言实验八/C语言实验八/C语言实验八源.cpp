/*一个学生的基本信息有：学号、姓名、性别和年龄，现要存放 5 个同学的信息，编程
实现把各项信息输出出来。*/
struct student /*定义一种结构体类型*/
{
	int num;
	char name[20];
	char sex;
	int age;
};
#include <stdio.h>
int main() 
{
	
	struct student stu[5],*p=stu;
	int i;
	for (i = 0; i < 5; i++)
		scanf("%d %s %c %d", &stu[i].num, stu[i].name, &stu[i].sex, &stu[i].age);
	for (i = 0; i < 5; i++)
		printf("%d %s %c %d\n", (p+i)->num, (p + i)->name, (p + i)->sex, (p + i)->age);
	return 0;
}

/*（2）建立一个静态链表，它由三个学生数据结点组成，输出各结点的数据*/
//#include <stdio.h>
//#define NULL 0 
//struct student {
//	long num;
//	float score;
//	struct student* next;
//};
//int main()
//{
//	struct student a, b, c, * head, * p;
//		a.num = 99101; a.score = 89.5;
//	b.num = 99103; b.score = 90;
//	c.num = 99107; c.score = 85;
//	head = &a; a.next = &b; b.next = &c; c.next = NULL; p = head;
//	while (p != NULL)
//	{
//		printf("% ld % 5.1f\n", p->num, p->score);
//		p = p->next;
//	}
//}


/*（1）定义一个结构体类型，包括职工的如下信息：职工号、姓名、年龄、工资和职称，
输入 3 个人的信息，然后输出。*/
//#include<stdio.h>
//#include<string.h>
//struct student
//{
//	int num;
//	char name[20];
//	int age;
//	int wages;
//	char position[20];
//
//};
//
//void main()
//{
//	struct student staff[3];
//	int i;
//	for (i = 0; i < 3; i++)
//		scanf("%d %s %d %d %s", &staff[i].num, staff[i].name,  &staff[i].age,
//			&staff[i].wages, staff[i].position);
//	for (i = 0; i < 3; i++)
//		printf("%d %s %d %d %s\n", staff[i].num, staff[i].name, staff[i].age,
//			staff[i].wages, staff[i].position);
//}