/*һ��ѧ���Ļ�����Ϣ�У�ѧ�š��������Ա�����䣬��Ҫ��� 5 ��ͬѧ����Ϣ�����
ʵ�ְѸ�����Ϣ���������*/
struct student /*����һ�ֽṹ������*/
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

/*��2������һ����̬������������ѧ�����ݽ����ɣ��������������*/
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


/*��1������һ���ṹ�����ͣ�����ְ����������Ϣ��ְ���š����������䡢���ʺ�ְ�ƣ�
���� 3 ���˵���Ϣ��Ȼ�������*/
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