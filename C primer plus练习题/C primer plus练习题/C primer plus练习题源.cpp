//�����ϰ2.12 1 P33
//#include<stdio.h>
//#define name "Yuxuan"
//#define surname "Deng"
//
//int main(void)
//{
//	printf("%s %s\n", name, surname);
//	printf("%s\n%s\n", name, surname);
//	printf("%s ", surname);
//	printf("%s\n", name);
//	return 0;
//
//}

//�����ϰ2.12 2 P33
//#include<stdio.h>
//#define name "Deng Yuxuan"
//#define address "ZHKU"
//
//int main(void)
//{
//	printf("%s\n", name);
//	printf("%s", address);
//	
//	return 0;
//
//}

//�����ϰ2.12 3 P33
//#include<stdio.h>
//int main(void)
//{
//	int age , day;
//
//	scanf_s("%d", &age);
//	printf("%d\n", age);
//	day = 365 * age;
//	printf("����Ϊ%d\n", day);
//
//	return 0;
//
//}

//�����ϰ2.12 4 P33
//#include<stdio.h>
// int jolly(void);
// int deny(void);
//int main(void)
//{
//   jolly();
//   jolly();
//   jolly();
//   deny();
// return 0;
//}
//int jolly(void)
// {
// printf("For\n");
// return 0;
// }
// int deny(void)
// {
// printf("Which\n");
// return 0;
// }
//

//�����ϰ2.12 5 P33
//#include<stdio.h>
//int br();
//int ic();
//int main(void)
//{
//	br();
//	printf(",");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//	return 0;
//}
//
//int br()              /*����дbr(void)*/
//{
//	printf("Brazil,Russia");
//	return 0;
//}
//
//int ic()               /*����дic(void)*/
//{
//	printf("India,China");
//	return 0;
//}

//�����ϰ2.12 6 P33
//#include<stdio.h>
//int main(void)
//{
//	int toes = 10;
//	printf("toes=%d\n", toes);
//	printf("double toes=%d\n", toes*2);
//	printf("toes'square=%d\n", toes*toes);
//	return 0;
//}

////�����ϰ2.12 7 P33
//#include<stdio.h>
//
//int smile(void);
//int main(void)
//{
//	smile();
//	smile();
//	smile();
//	printf("\n");
//	smile();
//	smile();
//	printf("\n");
//	smile();
//	return 0;
//}
//
//int smile(void)
//{
//	printf("Smile!");
//	return 0;
//}


////�����ϰ2.12 8 P33
//#include<stdio.h>
//int one_three(void);
//int two(void);
//
//int main(void)
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!\n");
//	return 0;
//}
//
//int one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//	return 0;
//}
//
//int two(void)
//{
//	printf("two\n");
//	return 0;
//}

////�����ϰ3.11 2 P60
//#include<stdio.h>
//int main(void)
//{
//	int a;
//	printf("����ASCIIֵ��");
//	scanf_s("%d", &a);
//	printf("%c", a);
//	return 0;
//
//}

////�����ϰ3.11 3 P60
//#include<stdio.h>
//int main(void)
//{
//	char ch = '\a';
//    printf("\a",ch);
//	printf("һ���ı�");
//	return 0;
//}


////�����ϰ3.11 4 P60
//#include<stdio.h>
//int main(void)
//{
//	double a;
//	scanf_s("%lf",&a);
//	printf("С����ʽΪ��%lf\n",a);
//	printf("ָ����ʽΪ��%e\n",a);
//	printf("P��������ʽΪ��%a\n", a);
//	return 0;
//}

////�����ϰ3.11 5 P60
//#include<stdio.h>
//int main(void)
//{
//	int age;
//	double a;
//	printf("���������䣺\n");
//    scanf_s("%d", &age);
//	a = 3.156e7 * age;
//	printf("����Ϊ��%lf\n", a);
//	return 0;
//}


////�����ϰ3.11 6 P60
//#include<stdio.h>
//int main(void)
//{
//	int kua;
//	double a;
//	printf("������ˮ�Ŀ�������\n");
//	scanf_s("%d", &kua);
//	a =  kua * 950/3.0e-23;
//	printf("ˮ��������Ϊ��%lf\n", a);
//	return 0;
//}

////�����ϰ3.11 7 P60
//#include<stdio.h>
//int main(void)
//{
//	
//	float cm,inch;
//	printf("��������ߣ�Ӣ�磩��\n");
//	scanf_s("%f", &inch);
//	cm = inch * 2.54;
//	printf("���Ϊ�����ף���%0.2f\n", cm);
//	return 0;
//}

//�����ϰ3.11 8 P60
//#include<stdio.h>
//#define Pintuo_cup 2
//#define cup_angsi 8
//#define angsi_tang 2
//#define tang_cha 3
//int main(void)
//{
//	float Pintuo,cup, angsi, tang, cha;
//	printf("�����뱭����\n");
//	scanf_s("%f", &cup);
//	Pintuo = cup / Pintuo_cup;
//	printf("Ʒ�ѣ�%f\n", Pintuo);
//	angsi = cup * cup_angsi;
//	printf("��˾��%f\n", angsi);
//	tang = cup * cup_angsi * angsi_tang;
//	printf("���ף�%f\n", tang);
//	cha = cup * cup_angsi * angsi_tang* tang_cha;
//	printf("���ף�%f\n", cha);
//	return 0;
//}


// defines.c -- ʹ��limit.h��floatͷ�ļ��ж������ʾ����
//#include <stdio.h>
//#include <limits.h>    // ��������
//#include <float.h>     // ����������
//int main(void)
//{
//    printf("Some number limits for this system:\n");
//    printf("Biggest int: %d\n", INT_MAX);
//    printf("Smallest long long: %lld\n", LLONG_MIN);
//    printf("One byte = %d bits on this system.\n", CHAR_BIT);
//    printf("Largest double: %e\n", DBL_MAX);
//    printf("Smallest normal float: %e\n", FLT_MIN);
//    printf("float precision = %d digits\n", FLT_DIG);
//    printf("float epsilon = %e\n", FLT_EPSILON);
//
//    return 0;
//}

//�����¸�ϰ��5
//#include<stdio.h>
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of %s sells for $%.2f.\n", BOOK, cost);
//	printf("That is %d%% of list.", (int)percent);    //Ҳ����%.0f%%���
//	return 0;
//}

//�����ϰ4.8 1 P87
//#include<stdio.h>
//int main(void)
//{
//	char name[20];
//	char xing[20];
//	printf("��������");
//	scanf("%s",&name);
//	printf("��������");
//	scanf("%s",&xing);
//	printf("%s,%s", name, xing);
//	return 0;
//}

//�����ϰ4.8 2 P87   �ص㿴����
//#include<stdio.h>
//int main(void)
//{
//	char name[20];
//	int width;
//	printf("��������");
//	scanf("%s", name);
//	width = printf("\"%s\"\n.",name);
//	width -= 4;
//	printf("\"%20s\".\n",name);
//	printf("\"%-20s\".\n",name);
//	printf("\"%*s\".", (width + 3), name);
//	return 0;
//}

//�����ϰ4.8 3 P87   
//#include<stdio.h>
//int main(void)
//{
//	float number;
//	printf("������һ����������");
//	scanf("%f", &number);
//	printf("%f ", number);
//	printf("%e ", number);
//	return 0;
//}

//�����ϰ4.8 4 P87   
//#include<stdio.h>
//int main(void)
//{
//	float tall;
//	char name[10];
//	printf("��������������ߣ�cm����");
//	scanf("%s %f", name, &tall);        //ֻ���ַ�����%s������Ҫ&����������Ҫ&
//	printf("%s��������Ϊ%.2f��", name, tall / 100);
//	return 0;
//}

//�����ϰ4.8 5 P87   
//#include<stdio.h>
//int main(void)
//{
//	float speed, size;
//	printf("�����������ٶȣ�Mb/s�����ļ���С��Mb����");
//	scanf("%f %f", &speed, &size);
//	printf("��ÿ��%.2f���ٶ��£�һ��%.2f���ļ�\n����ʱ��Ҫ%.2f��", speed, size, size / speed);
//		return 0;
//}

//�����ϰ4.8 6 P87   
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char name[10], surname[10];
//	printf("�����������գ�");
//	scanf("%s %s", name, surname);
//	printf("%s %s\n", name, surname);
//	printf("%*d %*d\n",strlen(name),strlen(name), strlen(surname), strlen(surname));   //������
//	printf("%s %s\n", name, surname);
//	printf("%-*d %-*d", strlen(name), strlen(name), strlen(surname), strlen(surname)); 
//	return 0;
//}

//�����ϰ4.8 7 P87   
//#include<stdio.h>
//#include<float.h>
//int main(void)
//{
//	float f_third = 1.0 / 3.0;
//	double d_third = 1.0 / 3.0;
//	printf("��λС��Ϊ��%.6f\n", f_third);
//	printf("ʮ��λС��Ϊ��%.12f\n", f_third);
//	printf("ʮ��λС��Ϊ��%.16f\n", f_third);
//	printf("��λС��Ϊ��%.6f\n", d_third);
//	printf("ʮ��λС��Ϊ��%.12f\n", d_third);
//	printf("ʮ��λС��Ϊ��%.16f\n", d_third);
//	printf("FLOAT���͵ľ���ΪΪ��%d\n", FLT_DIG);
//	printf("DOUBLE���͵ľ���ΪΪ��%d\n", DBL_DIG);
//	return 0;
//}


//�����ϰ4.8 8 P87       �������
//#include<stdio.h>
//#define GALLON_TO_LITRE 3.785
//#define MILE_TO_KM 1.609
//int main(void)
//{
//	float range, oil;
//	printf("������������̣�Ӣ���");
//	scanf("%f",&range);
//	printf("���������������������أ���");
//	scanf("%f",&oil);
//	printf("����������ĺ�����Ϊ%.1f M/G\n", range / oil);
//	printf("��ŷ�ޣ���ĺ�����Ϊ%.1f L/100KM\n", (oil * GALLON_TO_LITRE * 100) / (range * MILE_TO_KM));
//	return 0;
//}

////��̸�ϰ��5.10 10 P114
//#include<stdio.h>
//int main(void)
//{
//	int x = 0;
//	while (++x < 3)
//		printf("%4d\n", x);
//	return 0;
//}

//��̸�ϰ��5.11 1 P115
//#include<stdio.h>
//#define MIN 60
//int main(void)
//{
//	int minute;
//	scanf("%d", &minute);
//	while (minute > 0)
//	{
//		printf("%d������%dСʱ%d����\n", minute, minute / MIN, minute % MIN);
//		scanf("%d", &minute);
//	}
//	printf("���������0����");
//		return 0;
//}

//��̸�ϰ��5.11 2 P115
//#include<stdio.h>
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	int b = a + 11;
//	while (a < b)
//		printf("%d ", a++);
//	printf("\nend");
//	return 0;
//}


//��̸�ϰ��5.11 3 P115
//#include<stdio.h>
//#define DAY 7
//int main(void)
//{
//	int day;
//		scanf("%d", &day);
//		while (day > 0)
//		{
//			printf("%d������%��%d�ܵ�%d��\n", day, day / DAY, day % DAY);
//			scanf("%d", &day);
//		}
//		printf("���������0����");
//			return 0;
//	}

//��̸�ϰ��5.11 6 P115
//#include<stdio.h>
//int main(void)
//{
//	int count, sum, day;
//	count = 0;
//	sum = 0;
//	scanf("%d", &day);
//	while (count++ < day)
//		sum = sum+count * count;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//��̸�ϰ��5.11 9 P115           �������
//#include<stdio.h>
//int Temperatures(double f);
//int main(void)
//{
//	double f;
//	printf("�����뻪�϶ȣ�");
//	
//	while (scanf("%lf", &f) == 1)
//	{
//		Temperatures(f);
//			printf("�������뻪�϶ȣ�");
//	}
//	printf("��������ֵ");
//	return 0;
//}
//int Temperatures(double f)
//{
//	double c, k;
//	c = 5.00 / 9.00 * (f - 32.0);
//	k = c + 273.16;
//	printf("�����¶�Ϊ%.2f\n�����¶�Ϊ%.2f\n", c, k);
//	return 0;
//}

/*�����嵥6.12 for_cube.c -- ʹ��forѭ������һ��������  P129*/
//#include <stdio.h>
//int main(void)
//{
//    int num;
//
//    printf("    n   n cubed\n");
//    for (num = 1; num < 6; num++)
//        printf("%5d %5d\n", num, num * num * num);
//
//    return 0;
//}


/*6.15��ϰ��.6  P146*/
//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 8; j++)
//			printf("$");
//		printf("\n");
//	}
//	return 0;
//}

/*��̸�ϰ��6.16 1 P149*/        //�ر������
//#include <stdio.h>
//int main(void)
//{
//	char a[26];
//	int i;
//	char c = 'a';
//	for (i = 0; i < 26; i++, c++)
//		a[i] = c;
//	for (i = 0; i < 26; i++)
//	printf("%c ", a[i]);
//	return 0;
//}


/*��̸�ϰ��6.16 2 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int i;
//	int n;
//	for (i = 0; i <= 5; i++)
//	{ 
//		for (n = 1;  n<=i ; n++)
//		printf("$");
//	    printf("\n");
//	}
//	return 0;
//}


/*��̸�ϰ��6.16 3 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	char c;
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 0, c = 'F'; j < i; j++, c--)
//			printf("%c", c);
//		printf("\n");
//	}
//	return 0;
//}


/*��̸�ϰ��6.16 4 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	char c='A';
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 0; j < i; j++, c++)
//			printf("%c", c);
//		printf("\n");
//	}
//	return 0;
//}

/*��̸�ϰ��6.16 5 P149*/             //�ص������
//#include <stdio.h>
//int main(void)
//{
//	int i, j,num;
//	char c;
//	printf("������һ����д��ĸ��");
//	scanf("%c", &c);
//	char ch = 'A';
//	num = c - 'A' + 1;
//
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 0; j < num - i; j++)
//			printf(" ");
//		for(ch='A';j<num;j++)
//			printf("%c", ch++);
//		for(j=1,ch-=2;j<i;j++,ch--)
//		printf("%c",ch);
//		printf("\n");
//	}
//	return 0;
//}

/*��̸�ϰ��6.16 6 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int start, end, i;
//	printf("�������ʼ���ݣ�");
//	scanf("%d", &start);
//	printf("������ĩβ���ݣ�");
//	scanf("%d", &end);
//	printf("   ����       ƽ��       ������\n");
//	for (i = start; i <= end; i++)
//	{
//		printf("%6d %10d %10d", i, i * i, i * i * i);
//			printf("\n");
//	}
//	return 0;
//}

/*��̸�ϰ��6.16 7 P149*/
//#include <stdio.h>
//#include<string.h>
//int main(void)
//{
//	char word[20];
//	int i;
//	printf("������һ�����ʣ�");
//	scanf("%s", word);
//	printf("������ĵ����ǣ�%s\n", word);
//	printf("������ĵ��ʵĵ����ǣ�");
//	for (i = strlen(word) - 1; i >= 0; i--)    //������\0������Ҫ-1
//		printf("%c", word[i]);
//	return 0;
//}

///*��̸�ϰ��6.16 8 P149*/
//#include <stdio.h>
//int main(void)
//{
//	float x, y;
//	printf("������������������");
//		while (scanf("%f %f", &x, &y) == 2)             //����ֵ�򷵻�ֵΪ2
//		{
//			printf("������Ϊ��%f", (x - y) / (x * y));
//			printf("������������������");
//		}
//		printf("�����븡����������");
//		return 0;
//}

/*��̸�ϰ��6.16 9 P149*/
//#include <stdio.h>
//float calc(float x, float y);
//int main(void)
//{
//	float x, y;
//	printf("������������������");
//	while (scanf("%f %f", &x, &y) == 2)             //����ֵ�򷵻�ֵΪ2
//	{
//		printf("������Ϊ��%f", calc(x,y));
//		printf("������������������");
//	}
//	printf("�����븡����������");
//	return 0;
//}
//
//float calc(float x, float y)
//{
//	float result;
//	result = (x - y) / (x * y);
//	return result;
//}


/*��̸�ϰ��6.16 10 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int up, down, i,sum=0;
//	printf("����������������");
//	scanf("%d", &up);
//	printf("����������������");
//	scanf("%d", &down);
//	do
//	{
//		for (i = down; i <= up; i++)
//		{
//			sum = sum + i * i;
//		}
//		printf("��%d��%d��ƽ����Ϊ��%d\n", down * down, up*up, sum);
//		printf("����������������");
//		scanf("%d", &up);
//		printf("����������������");
//		scanf("%d", &down);
//		sum = 0;
//	}
//	while(up> down);
//	printf("Done");
//	return 0;
//}

/*��̸�ϰ��6.16 11 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int a[8], i;
//	printf("������8��������");
//	for (i = 0; i < 8; i++)
//		scanf("%d", &a[i]);        //��Ҫ©��&   ������
//	for (i = 7; i >= 0; i--)
//		printf("%d", a[i]);       //�����ӡ����Ҫע���±�Խ������
//	return 0;
//}

/*��̸�ϰ��6.16 12 P149*/                   //�ص������
//#include <stdio.h>
//int main(void)
//{
//	int length, i;
//	double sum = 0.0;            //ע����0.0����Ϊ��Ŀ��һλС��
//	printf("������һ��������");
//	scanf("%d", &length);
//	while (length > 0)
//	{
//		sum = 0.0;                    //��Ҫ©�ˣ�����ڶ�������ᱣ����һ�ε�sum
//		for (i = 1; i <= length; i++)
//		{
//			sum = sum + 1.0 / i;
//		}
//		printf("��������1.0+1.0/2.0+1.0/3.0+...������Ϊ%d�ĺ�Ϊ%lf\n", length, sum);
//		sum = 0.0;
//		for (i = 1; i <= length; i++)
//		{
//			if (i % 2 == 1)
//				sum = sum + 1.0 / i;
//			else
//				sum = sum - 1.0 / i;
//		}
//		printf("��������1.0-1.0/2.0+1.0/3.0-...������Ϊ%d�ĺ�Ϊ%lf\n", length, sum);
//		sum = 0.0;
//		for (i = 1; i <= length; i++)
//		{
//			if (i % 2 == 1)           //��һ��д�� if (i % 2 != 0)
//			{
//				sum = sum + 2*1.0 / i;
//			}
//		}
//		printf("������������������Ϊ%d�ĺ�Ϊ%lf\n", length, sum);
//		printf("������һ��������");
//		scanf("%d", &length);
//	}
//	printf("\nDone!\n");
//	return 0;
//}

/*��̸�ϰ��6.16 13 P149*/                  
//#include <stdio.h>
//int main(void)
//{
//	int a[8], i;
//	a[0] = 2;
//	for (i = 1; i < 8; i++)
//		a[i] = a[i - 1] * 2;
//	do
//		printf("%d  ", a[0]);
//	while (i < 8);
//	{
//		for (i = 1; i < 8; i++)
//			printf("%d  ", a[i]);
//	}
//	return 0;
//}

/*��̸�ϰ��6.16 14 P149*/
//#include <stdio.h>
//int main(void)
//{
//	double a[8],b[8];
//	int i, j;
//	for (i = 0; i < 8; i++)
//		scanf("%lf", &a[i]);
//	b[0] = a[0];
//	for (j = 1,i = 1; j < 8; j++, i++)
//		b[j] = b[j - 1] + a[i];
//	for (i = 0; i < 8; i++)
//		printf("%lf  ", a[i]);
//	printf("\n");
//	for (j = 0; j < 8; j++)
//		printf("%lf  ", b[j]);
//	return 0;
//}

/*��̸�ϰ��6.16 15 P149*/
//#include <stdio.h>
//#include<string.h>
//int main(void)
//{
//	char text[256];
//	int i=0;
//	printf("������һ�仰��");
//	do {
//          scanf("%c", &text[i]);
//	} while (text[i] != '\n' && ++i);
//	printf("���������仰�ĵ����ǣ�");
//	for (i--; i >= 0; i--)    //������\0������Ҫ-1
//		printf("%c", text[i]);
//	printf("\nDone!\n");
//	return 0;
//}

/*��̸�ϰ��6.16 16 P149*/
//#include <stdio.h>
//#include<string.h>
//int main(void)
//{
//	float sin, dou;              //dou��ָ������Ϣ��sin��ָ����Ϣ
//	sin = dou = 100.0;
//	int year=0;
//	do {
//		sin = sin + 0.1 * 100;
//		dou = dou + dou*0.05;
//		year++;
//	} while (dou < sin);
//	printf("��Ҫ%d��\ndou��%f��Ԫ\nsin��%f��Ԫ\n",year,dou,sin);
//	printf("\nDone!\n");
//	return 0;
//}

/*��̸�ϰ��6.16 17 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int year = 0;
//	float sum=100;
//	do {
//		sum = sum + sum * 0.08;
//		year++;
//		sum = sum - 10;
//	} while (sum >= 10);
//	printf("��Ҫ%d���ȡ���˻����Ǯ\n", year);
//	return 0;
//}

/*��̸�ϰ��6.16 18 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int week = 0, quantity = 5;
//	do {
//		quantity = quantity - 1;
//		quantity = quantity * 2;
//		week++;
//		printf("��%d����%d������\n", week, quantity);
//	} while (quantity < 150);
//	printf("\nDone��\n");
//	return 0;
//}

// cypher1.c -- �������룬�ո񲻱�
//#include <stdio.h>
//#define SPACE ' '                  // SPACE��ʾ������-�ո�-������
//int main(void)
//{
//    char ch;
//
//    ch = getchar();              // ��ȡһ���ַ�
//    while (ch != '\n')           // ��һ��δ����ʱ
//    {
//        if (ch == SPACE)        // ���¿ո�
//            putchar(ch);       // ���ַ�����
//        else
//            putchar(ch + 1);   // �ı������ַ�
//        ch = getchar();         // ��ȡ��һ���ַ�
//    }
//    putchar(ch);                 // ��ӡ���з�
//
//    return 0;
//}

// divisors.c -- ʹ��Ƕ��if�����ʾһ������Լ��  ���䣡����
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//    unsigned long num;          // �����Ե���
//    unsigned long div;          // ���ܵ�Լ��
//    bool isPrime;               // �������
//
//    printf("Please enter an integer for analysis; ");
//    printf("Enter q to quit.\n");
//    while (scanf("%lu", &num) == 1)
//    {
//        for (div = 2, isPrime = true; (div * div) <= num; div++)
//        {
//            if (num % div == 0)
//            {
//                if ((div * div) != num)
//                    printf("%lu is divisible by %lu and %lu.\n",
//                        num, div, num / div);
//                else
//                    printf("%lu is divisible by %lu.\n",
//                        num, div);
//                isPrime = false;    // ������������
//            }
//        }
//        if (isPrime)
//            printf("%lu is prime.\n", num);
//        printf("Please enter another integer for analysis; ");
//        printf("Enter q to quit.\n");
//    }
//    printf("Bye.\n");
//
//    return 0;
//}

/*��̸�ϰ��7.12 1 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int blank = 0;
//	int endline = 0;
//	int others = 0;
//	printf("�������ַ�����#�ͽ�������");
//	while ((ch = getchar()) != '#')
//	if (ch == ' ')
//		blank++;
//	else if (ch == '\n')
//		endline++;
//	else
//		others++;
//	printf("һ����%d���ո���%d���з���%d�����������ַ���", blank, endline, others);
//	return 0;
//}

/*��̸�ϰ��7.12 2 P149*/               //�ص㿴����
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i=0;
//	printf("�������ַ�����#�ͽ�������");
//	while ((ch = getchar()) != '#')
//	{
//		if (i++ % 8 == 0)
//			printf("\n");
//		if (ch == '\n')
//			printf("'\\n'-%03d.", ch);
//		else if (ch == '\t')
//			printf("'\\t'-%03d.", ch);
//		else
//			printf("'%c'-%03d.", ch, ch);
//	}
//	printf("Done\n");
//	return 0;
//}

/*��̸�ϰ��7.12 3 P149*/               
//#include <stdio.h>
//int main(void)
//{
//	int odd=0, even=0, odd_sum=0, even_sum=0, number=0;
//	printf("��������������0��������");
//	while (scanf("%d", &number))
//	{
//		if (number == 0)
//			break;
//		if (number % 2 == 0) {
//			even_sum = even_sum + number;
//			even++;
//		}
//		else {
//			odd_sum = odd_sum + number;
//			odd++;
//		}
//	}
//	printf("һ����%d��ż����ƽ����Ϊ%g\n", even, 1.0*even_sum/even);     //%g�������ʵ��,��������ֵ�Ĵ�С,�Զ�ѡf��ʽ��e��ʽ
//	printf("һ����%d��������ƽ����Ϊ%g\n", odd, 1.0*odd_sum/odd);        //(ѡ�����ʱռ��Ƚ�С��һ��),�Ҳ�����������0
//	return 0;
//}

/*��̸�ϰ��7.12 4 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i = 0;
//	printf("�������ַ�����#�ͽ�������");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '.') {
//			printf("!");
//			i++;
//		}
//		else if (ch == '!') {
//			printf("!!");
//			i++;
//		}
//		else
//			printf("%c", ch);
//	}
//    printf("\n");
//	printf("һ����%d���滻\n", i);
//	return 0;
//}

/*��̸�ϰ��7.12 5 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i = 0;
//	printf("�������ַ�����#�ͽ�������");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch) {
//		case'.':printf("!");
//			i++;
//		case'!':printf("!!");
//			i++;
//			break;
//		default:printf("%c", ch);
//		}
//	}
//	    printf("\n");
//	printf("һ����%d���滻\n", i);
//	return 0;
//}

/*��̸�ϰ��7.12 6 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i = 0, j = 0;
//	printf("�������ַ�����#�ͽ�������");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch) {
//		case'e':i=1;
//			break;
//		case'i':
//			if (i == 1) {
//                 j++;
//				 i = 0;
//			}
//			break;
//		default:i=0;
//		}
//	}
//	    printf("\n");
//	printf("һ����%d��ei\n", j);
//	return 0;
//}

/*��̸�ϰ��7.12 7 P149*/
//#define basepay 10.00   //��Ԫ/h
//#define taxrate1 0.15   //ǰ300˰��
//#define taxrate2 0.20   //��150˰��
//#define taxrate3 0.25   //���µ�˰��
//#include <stdio.h>
//int main(void)
//{
//	float hour = 0, tax = 0, totalpay = 0, realpay = 0;
//	printf("������һ�ܹ�����Сʱ����");
//	while (scanf("%f", &hour) == 1)       //�ж��Ƿ�Ϊ������
//	{
//		if (hour <= 40)                   //����Сʱ��������40Сʱ
//		{
//			totalpay = hour * basepay;
//			if (hour <= 30)               //ǰ30Сʱ
//				tax = totalpay * taxrate1;
//			else
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			realpay = totalpay - tax;
//		}
//		else {                            //����Сʱ������40Сʱ
//			hour = hour + (hour - 40) * 1.5;
//			totalpay = hour * basepay;
//			tax = totalpay * taxrate1;
//			if (hour <= 45)               //ǰ450����֪����ֱ�Ӽ��㣩
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			else
//				tax = basepay * 30 * taxrate1 + basepay * 15 * taxrate2 + (hour - 45) * basepay * taxrate3;
//			realpay = totalpay - tax;
//		}
//		printf("�����ܶ�Ϊ%f��˰��Ϊ%f��������Ϊ%f\n", totalpay, tax, realpay);
//		printf("������һ�ܹ�����Сʱ��(q�˳�)��");
//	}
//	printf("\nDone!\n");
//	return 0;
//}

/*��̸�ϰ��7.12 8 P149*/
//#define taxrate1 0.15   //ǰ300˰��
//#define taxrate2 0.20   //��150˰��
//#define taxrate3 0.25   //���µ�˰��
//#include <stdio.h>
//int main(void)
//{
//	float basepay = 0, hour = 0, tax = 0, totalpay = 0, realpay = 0;
//	int i = 0, a = 0;
//	printf("*********************************************\n");
//	printf("��ѡ����Ĺ��ʵȼ���\n");
//	printf("1)$8.75/hr    2)$9.33/hr   3)$10.00/hr\n");
//	printf("4)$11.20/hr   5)quit\n");
//	printf("*********************************************\n");
//	while (a == 0) {
//		a = 1;
//		scanf("%d", &i);
//	switch (i) 
//	    {
//	case 1:basepay = 8.75;
//		break;
//	case 2:basepay = 9.33;
//		break;
//	case 3:basepay = 10.00;
//		break;
//	case 4:basepay = 11.20;
//		break;
//	case 5:goto loop;
//	default:printf("��������ȷ��ѡ�");
//		a=0;
//		break;                   //��������ĸ����������ѭ������ʱ�޽�
//	    }
//	}
//	
//	printf("������һ�ܹ�����Сʱ����");
//	while (scanf("%f", &hour) == 1)       //�ж��Ƿ�Ϊ������
//	{
//		if (hour <= 40)                   //����Сʱ��������40Сʱ
//		{
//			totalpay = hour * basepay;
//			if (hour <= 30)               //ǰ30Сʱ
//				tax = totalpay * taxrate1;
//			else
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			realpay = totalpay - tax;
//		}
//		else {                            //����Сʱ������40Сʱ
//			hour = hour + (hour - 40) * 1.5;
//			totalpay = hour * basepay;
//			tax = totalpay * taxrate1;
//			if (hour <= 45)               //ǰ450����֪����ֱ�Ӽ��㣩
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			else
//				tax = basepay * 30 * taxrate1 + basepay * 15 * taxrate2 + (hour - 45) * basepay * taxrate3;
//			realpay = totalpay - tax;
//		}
//		printf("�����ܶ�Ϊ%f��˰��Ϊ%f��������Ϊ%f\n", totalpay, tax, realpay);
//		printf("������һ�ܹ�����Сʱ��(q�˳�)��");
//	}
//	loop:printf("\nDone!\n");
//	return 0;
//}

/*��̸�ϰ��7.12 9 P149*/                    //����
//#include <math.h>
//#include <stdio.h>
//int main(void)
//{
//	int number = 0, i, j;
//	do{
//		printf("������һ����������");
//	scanf("%d", &number);
//	if (number < 2) {
//		if (number == 0) break;
//		printf("%d������Χ\n", number);
//		continue;
//	}
//	for (i = number; i > 1; i--)
//	{
//		int is_prime = 1;
//		for (j = 2; j <= i / 2; j++) {
//			if (i % j == 0) {
//				is_prime = 0;
//				break;
//			}
//		}
//		if (is_prime == 1)
//			printf("%d  ", i);
//	}
//	printf("\n");
//}while (number != 0);
//	printf("Done��");
//	return 0;
//}

/*��̸�ϰ��7.12 10 P149*/               
//#define taxrate1 0.15   //��һ��˰��
//#define taxrate2 0.28   //�ڶ���˰��
//#include <stdio.h>
//int main(void)
//{
//	float basepay = 0, tax = 0, totalpay = 0;
//	int i = 0, a = 0;
//	printf("******************************************\n");
//	printf("��ѡ�����˰�����ࣺ\n");
//	printf("1)����    2)����   3)�ѻ飬����\n");
//	printf("4)�ѻ飬����   \n");
//	printf("******************************************\n");
//	while (a == 0) {
//		a = 1;
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:basepay = 17850;
//			break;
//		case 2:basepay = 23900;
//			break;
//		case 3:basepay = 29750;
//			break;
//		case 4:basepay = 14875;
//			break;
//		default:printf("��������ȷ��ѡ�");
//			a = 0;
//			break;                   //��������ĸ����������ѭ������ʱ�޽�
//		}
//	}
//	printf("��������Ĺ��ʣ�");
//	while (scanf("%f", &totalpay) == 1)
//	{
//		if (totalpay <= basepay)
//			tax = totalpay * taxrate1;
//		else
//			tax = basepay * taxrate1 + (totalpay - basepay) * taxrate2;
//		printf("Ӧ����˰��%.2f\n", tax);
//		printf("���ٴ�������Ĺ���(q�˳�)��\n");
//	}
//	printf("\nDone!\n");
//	return 0;
//}

/*��̸�ϰ��7.12 11 P149*/
//#define artichoke 2.05   //���ۼ�   ��Ԫ/��
//#define sugarbeet 1.15   //����ۼ�   ��Ԫ/��
//#define carrot 1.09      //���ܲ��ۼ� ��Ԫ/��
//#define discount 0.05    //�ۿۣ���100��Ԫ�Ķ�����
//#include <stdio.h>
//int main(void)
//{
//	float freight_package_charge = 0, vegetable_cost = 0, totalpay = 0;  //�˷Ѱ�װ�ѡ��������߲˷��á������ܷ���
//	char ch;    //ѡ��˵�����ĸ
//	int a = 0, totalweight = 0, artichoke_weight = 0, sugarbeet_weight = 0, carrot_weight = 0;   //�������������ܰ����������߲˵İ���
//	printf("****************************\n");
//	printf("��ѡ����Ҫ���������ࣺ\n");
//	printf("a)��     b)���  \n");
//	printf("c)���ܲ�   q)�˳����� \n");
//	printf("****************************\n");
//	while ((ch = getchar()) != 'q')
//	{
//		switch (ch)
//		{
//		case 'a':printf("��������Ҫ�����İ������󼻣���\n");
//			scanf("%d", &a);
//			artichoke_weight = artichoke_weight + a;
//			break;
//		case 'b':printf("��������Ҫ�����İ�������ˣ���\n");
//			scanf("%d", &a);
//			sugarbeet_weight = sugarbeet_weight + a;
//			break;
//		case 'c':printf("��������Ҫ�����İ��������ܲ�����\n");
//			scanf("%d", &a);
//			carrot_weight = carrot_weight + a;
//			break;
//		case 'q':
//			break;
//		default:printf("��������ȷ��ѡ�\n");
//			break;                   
//		}
//		printf("�����ѡ����Ҫ���������ࣨq�˳�����\n");
//		getchar();
//		continue;
//	}
//	printf("��Ʒ�ۼۣ���2.05��Ԫ/�������1.15��Ԫ/�������ܲ�1.09��Ԫ/��\n");
//	totalweight = artichoke_weight + sugarbeet_weight + carrot_weight;
//	printf("�㶩��������Ϊ%d��\n", totalweight);
//	vegetable_cost = artichoke * artichoke_weight + sugarbeet * sugarbeet_weight + carrot * carrot_weight;
//	printf("�㶩�����߲˷���ΪΪ%.2f��Ԫ\n", vegetable_cost);
//	if (vegetable_cost <= 5)
//	{
//		freight_package_charge = 6.5;
//		printf("�������˷ѺͰ�װ��Ϊ��%.2f��Ԫ\n", freight_package_charge);
//		totalpay = vegetable_cost + freight_package_charge;
//		printf("�������ܷ���Ϊ��%.2f��Ԫ\n", totalpay);
//	}
//	else if (vegetable_cost <= 20)
//	{
//		freight_package_charge = 14;
//		printf("�������˷ѺͰ�װ��Ϊ��%.2f��Ԫ\n", freight_package_charge);
//		totalpay = vegetable_cost + freight_package_charge;
//		printf("�������ܷ���Ϊ��%.2f��Ԫ\n", totalpay);
//	}
//	else
//	{
//		freight_package_charge = 14 + (totalweight - 20) * 0.5;
//		printf("�������˷ѺͰ�װ��Ϊ��%.2f��Ԫ\n", freight_package_charge);
//		if (vegetable_cost >= 100)
//		{
//			totalpay = (vegetable_cost - vegetable_cost * discount) + freight_package_charge;
//			printf("��Ķ������ۿ�Ϊ��%.2f��Ԫ\n", vegetable_cost * discount);
//		}
//		else
//		totalpay = vegetable_cost + freight_package_charge;
//		printf("��Ķ������ۿ�Ϊ��0\n");
//		printf("�������ܷ���Ϊ��%.2f��Ԫ\n", totalpay);
//	}
//	printf("Done!\n");
//	return 0;
//}

/*��̸�ϰ��8.11 1 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int counter = 0;
//	while ((ch = getchar()) != EOF) 
//	{
//		counter++;
//	}
//	printf("���ļ���%d���ַ�", counter);
//	return 0;
//}

/*��̸�ϰ��8.11 2 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int counter = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (counter++ == 10) {
//			printf("\n");
//			counter = 1;
//		}   //ÿ10����ӡһ�����з�
//		if (ch >= '\040') {
//			printf(" \'%c\'--%3d ", ch, ch);
//		} //���ڿո��ַ��Ŀ���ʾΪ�ַ��Ĵ�����ж�
//		else if (ch == '\n') {
//			printf(" \\n--\\n\n ");
//			counter = 0;
//		} //���з��Ĵ���
//		else if (ch == '\t') {
//			printf(" \\t--\\t ");
//		}//�Ʊ���Ĵ���
//		else {
//			printf(" \'%c\'--^%c ", ch, (ch + 64));
//		}
//	}
//	return 0;
//}

/*��̸�ϰ��8.11 3 P149*/
//#include <stdio.h>
//#include <ctype.h>  //islower()��isupper()������ͷ�ļ�
//int main(void)
//{
//	int lowercase = 0;
//	int uppercase = 0;
//	char ch;
//	while ((ch = getchar()) != EOF) {
//		if (ch >= 'A' && ch <= 'Z')
//			uppercase++;
//		if (ch >= 'a' && ch <= 'z')
//			lowercase++;
//	}
//	printf("һ����%d����д��ĸ��%d��Сд��ĸ������ļ���\n", uppercase, lowercase);
//	return 0;
//}

/*��̸�ϰ��8.11 4 P149*/
//#include <stdio.h>
//#include <ctype.h>  //islower()��isupper()������ͷ�ļ�
//int main(void)
//{
//	int words = 0;
//	int letter = 0;
//	char ch;
//	while ((ch = getchar()) != EOF) {
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			letter++;
//		if (ch >= ' ' || ch >= ',' || ch >= '.' || ch >= '\n')
//			words++;
//	}
//		printf("һ����%d������%d����ĸ,%.2f C/W!\n", words, letter, 1.0 * letter / words);
//		return 0;
//}

/*��̸�ϰ��8.11 5 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int head = 1;
//	int tail = 100;
//	int guess = (head + tail) / 2;        //����
//	char ch;
//	printf("������һ��������Χ1-100���һ���ͼ�³��������������\n");
//	printf("����Ҳ¶���������y�����´���������n��\n");
//	do {
//		printf("�Ҳ�...��%d��", guess);
//		if (getchar() == 'y')
//			break;
//		printf("�õģ���ô%d�Ǵ��ڻ���С���������(l or s)", guess);
//		while ((ch = getchar()) == '\n')
//			continue;
//		if (ch == 'l' || ch == 'L') {
//			tail = guess - 1;
//			guess = (head + tail) / 2;
//			continue;
//		}
//		else if (ch == 's' || ch == 'S') {
//			head = guess + 1;
//			guess = (head + tail) / 2;
//			continue;
//		}
//		else
//			continue;
//	} while (getchar() != 'y');
//	printf("�Ҳµ���!\n");
//	return 0;
//}

/*��̸�ϰ��8.11 6 P149*/
//#include <stdio.h>
//char get_first(void);
//int main(void)
//{
//	char ch;
//	ch = get_first();
//	printf("%c\n", ch);
//}
//char get_first(void) {
//	char ch;
//	do {
//		ch = getchar();
//	} while (ch == ' ' || ch == '\n' || ch == '\t');
//	return ch;
//}

/*��̸�ϰ��8.11 7 P149*/
//#define taxrate1 0.15   //ǰ300˰��
//#define taxrate2 0.20   //��150˰��
//#define taxrate3 0.25   //���µ�˰��
//#include <stdio.h>
//int main(void)
//{
//	float basepay = 0, hour = 0, tax = 0, totalpay = 0, realpay = 0;
//	char i;
//	printf("*********************************************\n");
//	printf("��ѡ����Ĺ��ʵȼ���\n");
//	printf("a)$8.75/hr    b)$9.33/hr   c)$10.00/hr\n");
//	printf("d)$11.20/hr   q)quit\n");
//	printf("*********************************************\n");
//	do{
//	switch (i=getchar()) 
//	    {
//	case 'a':
//	case 'A':basepay = 8.75;
//		break;
//	case 'b':
//	case 'B':basepay = 9.33;
//		break;
//	case 'c':
//	case 'C':basepay = 10.00;
//		break;
//	case 'd':
//	case 'D':basepay = 11.20;
//		break;
//	case 'q':
//	case 'Q':goto loop;
//	default:printf("��������ȷ��ѡ�");     //bug:�ᵯ������"��������ȷ��ѡ�"
//		break;                 
//	    }
//	} while (i != 'a'&& i != 'b' && i != 'c' && i != 'd' && i != 'A' && i != 'B' && i != 'C' && i != 'D' && i != 'q' && i != 'Q');
//	
//	printf("������һ�ܹ�����Сʱ����");
//	while (scanf("%f", &hour) == 1)       //�ж��Ƿ�Ϊ������
//	{
//		if (hour <= 40)                   //����Сʱ��������40Сʱ
//		{
//			totalpay = hour * basepay;
//			if (hour <= 30)               //ǰ30Сʱ
//				tax = totalpay * taxrate1;
//			else
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			realpay = totalpay - tax;
//		}
//		else {                            //����Сʱ������40Сʱ
//			hour = hour + (hour - 40) * 1.5;
//			totalpay = hour * basepay;
//			tax = totalpay * taxrate1;
//			if (hour <= 45)               //ǰ450����֪����ֱ�Ӽ��㣩
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			else
//				tax = basepay * 30 * taxrate1 + basepay * 15 * taxrate2 + (hour - 45) * basepay * taxrate3;
//			realpay = totalpay - tax;
//		}
//		printf("�����ܶ�Ϊ%.2f��˰��Ϊ%.2f��������Ϊ%.2f\n", totalpay, tax, realpay);
//		printf("������һ�ܹ�����Сʱ��(q�˳�)��");
//	}
//	loop:printf("\nDone!\n");
//	return 0;
//}

/*��̸�ϰ��8.11 8 P149*/
#include <stdio.h>
//float get_number(void)
//{
//	float f;
//	char c;
//	while (scanf("%g", &f) != 1) {
//		while ((c = getchar()) != '\n')
//			putchar(c);
//		printf(" ����һ�����֣�����������һ�����֣�\n");
//	}
//	return f;
//}
//
//int main(void)
//{
//	float first_number = 0, second_number = 0, result = 0;
//	char operate;          //�����û������ѡ��
//	printf("*********************************\n");
//	printf("��ѡ�����ѡ�\n");
//	printf("a)��    b)��   c)��\n");
//	printf("d)��   q)quit\n");
//	printf("*********************************\n");
//	do {
//		operate = getchar();
//		while (getchar() != '\n')continue;
//		switch (operate)
//		{
//		case 'a':printf("�������һ�����֣�");
//			first_number = get_number();
//			printf("������ڶ������֣�");
//			second_number = get_number();
//			printf("%g+%g=%g\n", first_number, second_number, first_number + second_number);
//			break;
//		case 'b':printf("�������һ�����֣�");
//			first_number = get_number();
//			printf("������ڶ������֣�");
//			second_number = get_number();
//			printf("%g-%g=%g\n", first_number, second_number, first_number - second_number);
//			break;
//		case 'c':printf("�������һ�����֣�");
//			first_number = get_number();
//			printf("������ڶ������֣�");
//			second_number = get_number();
//			printf("%g*%g=%g\n", first_number, second_number, first_number * second_number);
//			break;
//		case 'd':printf("�������һ�����֣�");
//			first_number = get_number();
//			printf("������ڶ������֣�");
//			while ((second_number = get_number()) == 0) {
//				printf("������������0�����������������֣�");
//			}
//			printf("%g/%g=%g\n", first_number, second_number, first_number / second_number);
//			break;
//		case 'q':break;
//		default:printf("��������ȷ��ѡ�");
//			while (getchar() != '\n');
//			break;
//		}while (getchar() != '\n');
//	}	while (operate != 'q');
//     printf("\nDone!\n");
//	return 0;
//}


