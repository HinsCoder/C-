//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Student
//{
//	int studid;
//	char name[10];
//	int math;
//	int english;
//	int total;
//	char date[11];
//}Student;
//int main()
//{
//	int i, num;
//	Student* pstud, stud;
//	FILE* fp;
//	printf("Ҫ����ɼ���ѧ��������");
//		scanf("%d", &num);
//	fflush(stdin);
//	pstud = (Student*)malloc(num * sizeof(Student));
//	if (pstud == NULL)
//	{
//		printf("�ڴ�����ڴ�ʧ�ܣ��˳�����\n");
//		exit(1);
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("���������͵�ѧ�ţ�");
//		scanf("%d", &pstud[i].studid);
//		printf("�������ַ��������ڣ�");
//		scanf("%s", pstud[i].date);
//		printf("�������ַ�����������");
//		scanf("%s", pstud[i].name);
//		printf("���������͵���ѧ�ɼ���");
//		scanf("%d", &pstud[i].math);
//		printf("���������͵�Ӣ��ɼ���");
//		scanf("%d", &pstud[i].english);
//		pstud[i].total = pstud[i].math + pstud[i].english;
//		fflush(stdin);
//	}
//	fp = fopen("studentf.dat", "wb");
//	if(fp==NULL)
//	{
//		printf("���ܴ����ļ�studentf.dat\n");
//		exit(1);
//	}
//	for (i = 0; i < num; i++)
//		fprintf(fp, "%d \t%s \t%s \t%d \t%d \t%d\n", pstud[i].studid, pstud[i].date, pstud[i].name, pstud[i].math, pstud[i].english, pstud[i].total);
//	fclose(fp);
//	free(pstud);
//	fp = fopen("studentf.dat", "rb");
//	if (fp == NULL)
//	{
//		printf("���ܴ��ļ�studentf.dat\n");
//		exit(1);
//	}
//	printf("ѧ�� \t ����\t ����\t ��ѧ�ɼ� Ӣ��ɼ� �ܷ� \n");
//	fscanf(fp, "%d %s %s %d %d %d\n", &stud.studid, stud.date, stud.name, &stud.math, &stud.english, &stud.total);
//	while (!feof(fp))
//	{
//		printf("%d\t",stud.studid);
//		printf("%s\t", stud.date);
//		printf("%s\t",stud.name);
//		printf("%d\t",stud.math);
//		printf("%d\t",stud.english);
//		printf("%d\n",stud.total);
//		fscanf(fp,"%d %s %s %d %d %d", &stud.studid, stud.date, stud.name, &stud.math, &stud.english, &stud.total);
//	}
//	fclose(fp);
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Record
//{
//	double rainfall,temperature;
//	int year;
//	int month;
//	int day;
//}Record;
//int main()
//{
//	int i, num;
//	Record* preco, reco{};
//	FILE* fp;
//	printf("Ҫ�������ݵ�������");
//	scanf("%d", &num);
//	fflush(stdin);
//	preco = (Record*)malloc(num * sizeof(Record));
//	if (preco == NULL)
//	{
//		printf("�ڴ�����ڴ�ʧ�ܣ��˳�����\n");
//		exit(1);
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("���������͵���ݣ�");
//		scanf("%d", &preco[i].year);
//		printf("���������͵��·ݣ�");
//		scanf("%d", &preco[i].month);
//		printf("���������͵���ݣ�");
//		scanf("%d", &preco[i].day);
//		printf("�����븡���͵Ľ�ˮ����");
//		scanf("%lf", &preco[i].rainfall);
//		printf("�����븡���͵��¶ȣ�");
//		scanf("%lf", &preco[i].temperature);
//		/*preco[i].total = preco[i].rainfall + preco[i].temperature;*/
//		fflush(stdin);
//	}
//	fp = fopen("recordf.dat", "wb");
//	if (fp == NULL)
//	{
//		printf("���ܴ����ļ�recordf.dat\n");
//		exit(1);
//	}
//	for (i = 0; i < num; i++)
//		fprintf(fp, "%d \t%d \t%d \t%lf \t%lf\n", preco[i].year, preco[i].month, preco[i].day, preco[i].rainfall, preco[i].temperature);
//	fclose(fp);
//	free(preco);
//	fp = fopen("recordf.dat", "rb");
//	if (fp == NULL)
//	{
//		printf("���ܴ��ļ�recordf.dat\n");
//		exit(1);
//	}
//	printf("��\t��\t��\t������   ����¶�\n");
//	fscanf(fp, "%d %d %d %lf %lf\n", &preco[i].year, &preco[i].month, &preco[i].day, &preco[i].rainfall, &preco[i].temperature);
//	while (!feof(fp))
//	{
//		printf("%d\t", reco.year);
//		printf("%d\t", reco.month);
//		printf("%d\t", reco.day);
//		printf("%lf\t", reco.rainfall);
//		printf("%lf\t", reco.temperature);
//		
//		fscanf(fp, "%d %d %d %lf %lf", &reco.year, &reco.month, &reco.day, &reco.rainfall, &reco.temperature);
//	}
//	fclose(fp);
//	return 0;
//}

//#include <stdio.h> 
//void fun(int a[ ], int n) 
//{	
// for(int i=0;i<n;i++) 	
//	if(a[i]>0) a[i]*=2;
//}
//void main()
//{	
// int b[5]={1,2,3,4,5}; 
//fun(b,5); 
//for(int i=0;i<5;i++) 	
//	printf("%d\t",b[i]);
//} 

//#include <stdio.h> 
//void main( )
// {		char a[]="Language",b[]="programe"; 
//char *p,*q; 
//int k; 
//p=a;q=b; 	
//for(k=0;k<8;k++) 	
//	if(*(p+k)==*(q+k)) 	
//		printf("%c",*(p+k)); 
//} 

//#include<stdio.h>
//void fun(char* p1, char c)
//{
//	char* p2 = p1; 
//while (*p1) 
//if (*p1 != c) *p2++ = *p1++; 
//else p1++; 
//*p2 = 0; } 
//void main() 
//{ char str[] = "aaweaaalaacaomaea!", ch = 'a'; 	
//fun(str, ch);  	 
//puts(str);
//}
//#include  <stdio.h> 
//struct man 
//{
//	char name[20];
//    int age; 
//}
//person[ ]={"Zhanghua",20,"Liuyang",25,"Sunpeng",19};
//void main( ) 
//{
//	struct man *p,*q; 
//    int old=0;
//    for(p=person;p < person + 3;p++)
//    if(old<p->age) 
//    {
//        q=p; 
//        old = p->age;
//    } 
//printf("%s %d",q->name,q->age); 
//} 


//ð������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int i, j, temp, a[N];
//	printf("������10������\n");
//	for (i = 0; i < N;i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < N-1;i++)
//		for(j=0;j<N-1-i;j++)
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//	printf("������Ϊ��\n");
//	for (i = 0; i < N; i++)
//		printf("%3d", a[i]);
//	printf("\n");
//	return 0;
//}

#include <stdio.h>
void main()
{
	int  a[] = { 10, 20, 30, 40, 50, 60 };
	int  x, y, * p;
	p = &a[0];
	x = *(p + 1);
	y = *(p + 3);
	printf(" * p = % d, x = % d, y = % d\n", *p, x, y);
}