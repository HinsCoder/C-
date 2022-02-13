//编程练习2.12 1 P33
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

//编程练习2.12 2 P33
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

//编程练习2.12 3 P33
//#include<stdio.h>
//int main(void)
//{
//	int age , day;
//
//	scanf_s("%d", &age);
//	printf("%d\n", age);
//	day = 365 * age;
//	printf("天数为%d\n", day);
//
//	return 0;
//
//}

//编程练习2.12 4 P33
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

//编程练习2.12 5 P33
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
//int br()              /*建议写br(void)*/
//{
//	printf("Brazil,Russia");
//	return 0;
//}
//
//int ic()               /*建议写ic(void)*/
//{
//	printf("India,China");
//	return 0;
//}

//编程练习2.12 6 P33
//#include<stdio.h>
//int main(void)
//{
//	int toes = 10;
//	printf("toes=%d\n", toes);
//	printf("double toes=%d\n", toes*2);
//	printf("toes'square=%d\n", toes*toes);
//	return 0;
//}

////编程练习2.12 7 P33
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


////编程练习2.12 8 P33
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

////编程练习3.11 2 P60
//#include<stdio.h>
//int main(void)
//{
//	int a;
//	printf("输入ASCII值：");
//	scanf_s("%d", &a);
//	printf("%c", a);
//	return 0;
//
//}

////编程练习3.11 3 P60
//#include<stdio.h>
//int main(void)
//{
//	char ch = '\a';
//    printf("\a",ch);
//	printf("一串文本");
//	return 0;
//}


////编程练习3.11 4 P60
//#include<stdio.h>
//int main(void)
//{
//	double a;
//	scanf_s("%lf",&a);
//	printf("小数形式为：%lf\n",a);
//	printf("指数形式为：%e\n",a);
//	printf("P计数法形式为：%a\n", a);
//	return 0;
//}

////编程练习3.11 5 P60
//#include<stdio.h>
//int main(void)
//{
//	int age;
//	double a;
//	printf("请输入年龄：\n");
//    scanf_s("%d", &age);
//	a = 3.156e7 * age;
//	printf("秒数为：%lf\n", a);
//	return 0;
//}


////编程练习3.11 6 P60
//#include<stdio.h>
//int main(void)
//{
//	int kua;
//	double a;
//	printf("请输入水的夸脱数：\n");
//	scanf_s("%d", &kua);
//	a =  kua * 950/3.0e-23;
//	printf("水分子数量为：%lf\n", a);
//	return 0;
//}

////编程练习3.11 7 P60
//#include<stdio.h>
//int main(void)
//{
//	
//	float cm,inch;
//	printf("请输入身高（英寸）：\n");
//	scanf_s("%f", &inch);
//	cm = inch * 2.54;
//	printf("身高为（厘米）：%0.2f\n", cm);
//	return 0;
//}

//编程练习3.11 8 P60
//#include<stdio.h>
//#define Pintuo_cup 2
//#define cup_angsi 8
//#define angsi_tang 2
//#define tang_cha 3
//int main(void)
//{
//	float Pintuo,cup, angsi, tang, cha;
//	printf("请输入杯数：\n");
//	scanf_s("%f", &cup);
//	Pintuo = cup / Pintuo_cup;
//	printf("品脱：%f\n", Pintuo);
//	angsi = cup * cup_angsi;
//	printf("盎司：%f\n", angsi);
//	tang = cup * cup_angsi * angsi_tang;
//	printf("汤勺：%f\n", tang);
//	cha = cup * cup_angsi * angsi_tang* tang_cha;
//	printf("茶勺：%f\n", cha);
//	return 0;
//}


// defines.c -- 使用limit.h和float头文件中定义的明示常量
//#include <stdio.h>
//#include <limits.h>    // 整型限制
//#include <float.h>     // 浮点型限制
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

//第四章复习题5
//#include<stdio.h>
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of %s sells for $%.2f.\n", BOOK, cost);
//	printf("That is %d%% of list.", (int)percent);    //也可以%.0f%%输出
//	return 0;
//}

//编程练习4.8 1 P87
//#include<stdio.h>
//int main(void)
//{
//	char name[20];
//	char xing[20];
//	printf("请输入名");
//	scanf("%s",&name);
//	printf("请输入姓");
//	scanf("%s",&xing);
//	printf("%s,%s", name, xing);
//	return 0;
//}

//编程练习4.8 2 P87   重点看☆☆☆
//#include<stdio.h>
//int main(void)
//{
//	char name[20];
//	int width;
//	printf("请输入名");
//	scanf("%s", name);
//	width = printf("\"%s\"\n.",name);
//	width -= 4;
//	printf("\"%20s\".\n",name);
//	printf("\"%-20s\".\n",name);
//	printf("\"%*s\".", (width + 3), name);
//	return 0;
//}

//编程练习4.8 3 P87   
//#include<stdio.h>
//int main(void)
//{
//	float number;
//	printf("请输入一个浮点数：");
//	scanf("%f", &number);
//	printf("%f ", number);
//	printf("%e ", number);
//	return 0;
//}

//编程练习4.8 4 P87   
//#include<stdio.h>
//int main(void)
//{
//	float tall;
//	char name[10];
//	printf("请输入姓名和身高（cm）：");
//	scanf("%s %f", name, &tall);        //只有字符串（%s）不需要&，其他的需要&
//	printf("%s，你的身高为%.2f米", name, tall / 100);
//	return 0;
//}

//编程练习4.8 5 P87   
//#include<stdio.h>
//int main(void)
//{
//	float speed, size;
//	printf("请输入下载速度（Mb/s）和文件大小（Mb）：");
//	scanf("%f %f", &speed, &size);
//	printf("在每秒%.2f的速度下，一个%.2f的文件\n下载时间要%.2f秒", speed, size, size / speed);
//		return 0;
//}

//编程练习4.8 6 P87   
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char name[10], surname[10];
//	printf("请输入名和姓：");
//	scanf("%s %s", name, surname);
//	printf("%s %s\n", name, surname);
//	printf("%*d %*d\n",strlen(name),strlen(name), strlen(surname), strlen(surname));   //不明白
//	printf("%s %s\n", name, surname);
//	printf("%-*d %-*d", strlen(name), strlen(name), strlen(surname), strlen(surname)); 
//	return 0;
//}

//编程练习4.8 7 P87   
//#include<stdio.h>
//#include<float.h>
//int main(void)
//{
//	float f_third = 1.0 / 3.0;
//	double d_third = 1.0 / 3.0;
//	printf("六位小数为：%.6f\n", f_third);
//	printf("十二位小数为：%.12f\n", f_third);
//	printf("十六位小数为：%.16f\n", f_third);
//	printf("六位小数为：%.6f\n", d_third);
//	printf("十二位小数为：%.12f\n", d_third);
//	printf("十六位小数为：%.16f\n", d_third);
//	printf("FLOAT类型的精度为为：%d\n", FLT_DIG);
//	printf("DOUBLE类型的精度为为：%d\n", DBL_DIG);
//	return 0;
//}


//编程练习4.8 8 P87       难题☆☆☆
//#include<stdio.h>
//#define GALLON_TO_LITRE 3.785
//#define MILE_TO_KM 1.609
//int main(void)
//{
//	float range, oil;
//	printf("请输入旅行里程（英里）：");
//	scanf("%f",&range);
//	printf("请输入消耗汽油量（加仑）：");
//	scanf("%f",&oil);
//	printf("在美国，你的耗油量为%.1f M/G\n", range / oil);
//	printf("在欧洲，你的耗油量为%.1f L/100KM\n", (oil * GALLON_TO_LITRE * 100) / (range * MILE_TO_KM));
//	return 0;
//}

////编程复习题5.10 10 P114
//#include<stdio.h>
//int main(void)
//{
//	int x = 0;
//	while (++x < 3)
//		printf("%4d\n", x);
//	return 0;
//}

//编程复习题5.11 1 P115
//#include<stdio.h>
//#define MIN 60
//int main(void)
//{
//	int minute;
//	scanf("%d", &minute);
//	while (minute > 0)
//	{
//		printf("%d分钟是%d小时%d分钟\n", minute, minute / MIN, minute % MIN);
//		scanf("%d", &minute);
//	}
//	printf("请输入大于0的数");
//		return 0;
//}

//编程复习题5.11 2 P115
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


//编程复习题5.11 3 P115
//#include<stdio.h>
//#define DAY 7
//int main(void)
//{
//	int day;
//		scanf("%d", &day);
//		while (day > 0)
//		{
//			printf("%d天数是%第%d周第%d天\n", day, day / DAY, day % DAY);
//			scanf("%d", &day);
//		}
//		printf("请输入大于0的数");
//			return 0;
//	}

//编程复习题5.11 6 P115
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

//编程复习题5.11 9 P115           难题☆☆☆
//#include<stdio.h>
//int Temperatures(double f);
//int main(void)
//{
//	double f;
//	printf("请输入华氏度：");
//	
//	while (scanf("%lf", &f) == 1)
//	{
//		Temperatures(f);
//			printf("请再输入华氏度：");
//	}
//	printf("请输入数值");
//	return 0;
//}
//int Temperatures(double f)
//{
//	double c, k;
//	c = 5.00 / 9.00 * (f - 32.0);
//	k = c + 273.16;
//	printf("摄氏温度为%.2f\n开氏温度为%.2f\n", c, k);
//	return 0;
//}

/*程序清单6.12 for_cube.c -- 使用for循环创建一个立方表  P129*/
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


/*6.15复习题.6  P146*/
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

/*编程复习题6.16 1 P149*/        //必背题☆☆☆
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


/*编程复习题6.16 2 P149*/
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


/*编程复习题6.16 3 P149*/
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


/*编程复习题6.16 4 P149*/
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

/*编程复习题6.16 5 P149*/             //重点题☆☆☆
//#include <stdio.h>
//int main(void)
//{
//	int i, j,num;
//	char c;
//	printf("请输入一个大写字母：");
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

/*编程复习题6.16 6 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int start, end, i;
//	printf("请输入初始数据：");
//	scanf("%d", &start);
//	printf("请输入末尾数据：");
//	scanf("%d", &end);
//	printf("   整数       平方       立方：\n");
//	for (i = start; i <= end; i++)
//	{
//		printf("%6d %10d %10d", i, i * i, i * i * i);
//			printf("\n");
//	}
//	return 0;
//}

/*编程复习题6.16 7 P149*/
//#include <stdio.h>
//#include<string.h>
//int main(void)
//{
//	char word[20];
//	int i;
//	printf("请输入一个单词：");
//	scanf("%s", word);
//	printf("你输入的单词是：%s\n", word);
//	printf("你输入的单词的倒序是：");
//	for (i = strlen(word) - 1; i >= 0; i--)    //不包含\0，所以要-1
//		printf("%c", word[i]);
//	return 0;
//}

///*编程复习题6.16 8 P149*/
//#include <stdio.h>
//int main(void)
//{
//	float x, y;
//	printf("请输入两个浮点数：");
//		while (scanf("%f %f", &x, &y) == 2)             //两个值则返回值为2
//		{
//			printf("运算结果为：%f", (x - y) / (x * y));
//			printf("请输入两个浮点数：");
//		}
//		printf("请输入浮点数！！！");
//		return 0;
//}

/*编程复习题6.16 9 P149*/
//#include <stdio.h>
//float calc(float x, float y);
//int main(void)
//{
//	float x, y;
//	printf("请输入两个浮点数：");
//	while (scanf("%f %f", &x, &y) == 2)             //两个值则返回值为2
//	{
//		printf("运算结果为：%f", calc(x,y));
//		printf("请输入两个浮点数：");
//	}
//	printf("请输入浮点数！！！");
//	return 0;
//}
//
//float calc(float x, float y)
//{
//	float result;
//	result = (x - y) / (x * y);
//	return result;
//}


/*编程复习题6.16 10 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int up, down, i,sum=0;
//	printf("请输入上限整数：");
//	scanf("%d", &up);
//	printf("请输入下限整数：");
//	scanf("%d", &down);
//	do
//	{
//		for (i = down; i <= up; i++)
//		{
//			sum = sum + i * i;
//		}
//		printf("从%d到%d的平方和为：%d\n", down * down, up*up, sum);
//		printf("请输入上限整数：");
//		scanf("%d", &up);
//		printf("请输入下限整数：");
//		scanf("%d", &down);
//		sum = 0;
//	}
//	while(up> down);
//	printf("Done");
//	return 0;
//}

/*编程复习题6.16 11 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int a[8], i;
//	printf("请输入8个整数：");
//	for (i = 0; i < 8; i++)
//		scanf("%d", &a[i]);        //不要漏了&   ！！！
//	for (i = 7; i >= 0; i--)
//		printf("%d", a[i]);       //倒序打印，需要注意下标越界问题
//	return 0;
//}

/*编程复习题6.16 12 P149*/                   //重点题☆☆☆
//#include <stdio.h>
//int main(void)
//{
//	int length, i;
//	double sum = 0.0;            //注意是0.0，因为题目是一位小数
//	printf("请输入一个项数：");
//	scanf("%d", &length);
//	while (length > 0)
//	{
//		sum = 0.0;                    //不要漏了，否则第二次输入会保留第一次的sum
//		for (i = 1; i <= length; i++)
//		{
//			sum = sum + 1.0 / i;
//		}
//		printf("无限数列1.0+1.0/2.0+1.0/3.0+...中项数为%d的和为%lf\n", length, sum);
//		sum = 0.0;
//		for (i = 1; i <= length; i++)
//		{
//			if (i % 2 == 1)
//				sum = sum + 1.0 / i;
//			else
//				sum = sum - 1.0 / i;
//		}
//		printf("无限数列1.0-1.0/2.0+1.0/3.0-...中项数为%d的和为%lf\n", length, sum);
//		sum = 0.0;
//		for (i = 1; i <= length; i++)
//		{
//			if (i % 2 == 1)           //另一种写法 if (i % 2 != 0)
//			{
//				sum = sum + 2*1.0 / i;
//			}
//		}
//		printf("两个无限数列中项数为%d的和为%lf\n", length, sum);
//		printf("请输入一个项数：");
//		scanf("%d", &length);
//	}
//	printf("\nDone!\n");
//	return 0;
//}

/*编程复习题6.16 13 P149*/                  
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

/*编程复习题6.16 14 P149*/
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

/*编程复习题6.16 15 P149*/
//#include <stdio.h>
//#include<string.h>
//int main(void)
//{
//	char text[256];
//	int i=0;
//	printf("请输入一句话：");
//	do {
//          scanf("%c", &text[i]);
//	} while (text[i] != '\n' && ++i);
//	printf("你输入的这句话的倒序是：");
//	for (i--; i >= 0; i--)    //不包含\0，所以要-1
//		printf("%c", text[i]);
//	printf("\nDone!\n");
//	return 0;
//}

/*编程复习题6.16 16 P149*/
//#include <stdio.h>
//#include<string.h>
//int main(void)
//{
//	float sin, dou;              //dou是指复合利息，sin是指单利息
//	sin = dou = 100.0;
//	int year=0;
//	do {
//		sin = sin + 0.1 * 100;
//		dou = dou + dou*0.05;
//		year++;
//	} while (dou < sin);
//	printf("需要%d年\ndou有%f美元\nsin有%f美元\n",year,dou,sin);
//	printf("\nDone!\n");
//	return 0;
//}

/*编程复习题6.16 17 P149*/
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
//	printf("需要%d年后取完账户里的钱\n", year);
//	return 0;
//}

/*编程复习题6.16 18 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int week = 0, quantity = 5;
//	do {
//		quantity = quantity - 1;
//		quantity = quantity * 2;
//		week++;
//		printf("第%d周有%d个朋友\n", week, quantity);
//	} while (quantity < 150);
//	printf("\nDone！\n");
//	return 0;
//}

// cypher1.c -- 更改输入，空格不变
//#include <stdio.h>
//#define SPACE ' '                  // SPACE表示单引号-空格-单引号
//int main(void)
//{
//    char ch;
//
//    ch = getchar();              // 读取一个字符
//    while (ch != '\n')           // 当一行未结束时
//    {
//        if (ch == SPACE)        // 留下空格
//            putchar(ch);       // 该字符不变
//        else
//            putchar(ch + 1);   // 改变其他字符
//        ch = getchar();         // 获取下一个字符
//    }
//    putchar(ch);                 // 打印换行符
//
//    return 0;
//}

// divisors.c -- 使用嵌套if语句显示一个数的约数  经典！！！
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//    unsigned long num;          // 待测试的数
//    unsigned long div;          // 可能的约数
//    bool isPrime;               // 素数标记
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
//                isPrime = false;    // 该数不是素数
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

/*编程复习题7.12 1 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int blank = 0;
//	int endline = 0;
//	int others = 0;
//	printf("请输入字符（有#就结束）：");
//	while ((ch = getchar()) != '#')
//	if (ch == ' ')
//		blank++;
//	else if (ch == '\n')
//		endline++;
//	else
//		others++;
//	printf("一共有%d个空格数%d换行符数%d个所有其他字符数", blank, endline, others);
//	return 0;
//}

/*编程复习题7.12 2 P149*/               //重点看☆☆☆
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i=0;
//	printf("请输入字符（有#就结束）：");
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

/*编程复习题7.12 3 P149*/               
//#include <stdio.h>
//int main(void)
//{
//	int odd=0, even=0, odd_sum=0, even_sum=0, number=0;
//	printf("请输入整数（以0结束）：");
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
//	printf("一共有%d个偶数，平均数为%g\n", even, 1.0*even_sum/even);     //%g用来输出实数,它根据数值的大小,自动选f格式或e格式
//	printf("一共有%d个奇数，平均数为%g\n", odd, 1.0*odd_sum/odd);        //(选择输出时占宽度较小的一种),且不输出无意义的0
//	return 0;
//}

/*编程复习题7.12 4 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i = 0;
//	printf("请输入字符（有#就结束）：");
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
//	printf("一共有%d次替换\n", i);
//	return 0;
//}

/*编程复习题7.12 5 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i = 0;
//	printf("请输入字符（有#就结束）：");
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
//	printf("一共有%d次替换\n", i);
//	return 0;
//}

/*编程复习题7.12 6 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i = 0, j = 0;
//	printf("请输入字符（有#就结束）：");
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
//	printf("一共有%d个ei\n", j);
//	return 0;
//}

/*编程复习题7.12 7 P149*/
//#define basepay 10.00   //美元/h
//#define taxrate1 0.15   //前300税率
//#define taxrate2 0.20   //续150税率
//#define taxrate3 0.25   //余下的税率
//#include <stdio.h>
//int main(void)
//{
//	float hour = 0, tax = 0, totalpay = 0, realpay = 0;
//	printf("请输入一周工作的小时数：");
//	while (scanf("%f", &hour) == 1)       //判断是否为浮点数
//	{
//		if (hour <= 40)                   //工作小时数不超过40小时
//		{
//			totalpay = hour * basepay;
//			if (hour <= 30)               //前30小时
//				tax = totalpay * taxrate1;
//			else
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			realpay = totalpay - tax;
//		}
//		else {                            //工作小时数超过40小时
//			hour = hour + (hour - 40) * 1.5;
//			totalpay = hour * basepay;
//			tax = totalpay * taxrate1;
//			if (hour <= 45)               //前450（已知收入直接计算）
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			else
//				tax = basepay * 30 * taxrate1 + basepay * 15 * taxrate2 + (hour - 45) * basepay * taxrate3;
//			realpay = totalpay - tax;
//		}
//		printf("工资总额为%f、税金为%f、净收入为%f\n", totalpay, tax, realpay);
//		printf("请输入一周工作的小时数(q退出)：");
//	}
//	printf("\nDone!\n");
//	return 0;
//}

/*编程复习题7.12 8 P149*/
//#define taxrate1 0.15   //前300税率
//#define taxrate2 0.20   //续150税率
//#define taxrate3 0.25   //余下的税率
//#include <stdio.h>
//int main(void)
//{
//	float basepay = 0, hour = 0, tax = 0, totalpay = 0, realpay = 0;
//	int i = 0, a = 0;
//	printf("*********************************************\n");
//	printf("请选择你的工资等级：\n");
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
//	default:printf("请输入正确的选项：");
//		a=0;
//		break;                   //若输入字母会引起无限循环，暂时无解
//	    }
//	}
//	
//	printf("请输入一周工作的小时数：");
//	while (scanf("%f", &hour) == 1)       //判断是否为浮点数
//	{
//		if (hour <= 40)                   //工作小时数不超过40小时
//		{
//			totalpay = hour * basepay;
//			if (hour <= 30)               //前30小时
//				tax = totalpay * taxrate1;
//			else
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			realpay = totalpay - tax;
//		}
//		else {                            //工作小时数超过40小时
//			hour = hour + (hour - 40) * 1.5;
//			totalpay = hour * basepay;
//			tax = totalpay * taxrate1;
//			if (hour <= 45)               //前450（已知收入直接计算）
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			else
//				tax = basepay * 30 * taxrate1 + basepay * 15 * taxrate2 + (hour - 45) * basepay * taxrate3;
//			realpay = totalpay - tax;
//		}
//		printf("工资总额为%f、税金为%f、净收入为%f\n", totalpay, tax, realpay);
//		printf("请输入一周工作的小时数(q退出)：");
//	}
//	loop:printf("\nDone!\n");
//	return 0;
//}

/*编程复习题7.12 9 P149*/                    //☆☆☆
//#include <math.h>
//#include <stdio.h>
//int main(void)
//{
//	int number = 0, i, j;
//	do{
//		printf("请输入一个正整数：");
//	scanf("%d", &number);
//	if (number < 2) {
//		if (number == 0) break;
//		printf("%d超出范围\n", number);
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
//	printf("Done！");
//	return 0;
//}

/*编程复习题7.12 10 P149*/               
//#define taxrate1 0.15   //第一档税率
//#define taxrate2 0.28   //第二档税率
//#include <stdio.h>
//int main(void)
//{
//	float basepay = 0, tax = 0, totalpay = 0;
//	int i = 0, a = 0;
//	printf("******************************************\n");
//	printf("请选择你的税金种类：\n");
//	printf("1)单身    2)户主   3)已婚，共有\n");
//	printf("4)已婚，离异   \n");
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
//		default:printf("请输入正确的选项：");
//			a = 0;
//			break;                   //若输入字母会引起无限循环，暂时无解
//		}
//	}
//	printf("请输入你的工资：");
//	while (scanf("%f", &totalpay) == 1)
//	{
//		if (totalpay <= basepay)
//			tax = totalpay * taxrate1;
//		else
//			tax = basepay * taxrate1 + (totalpay - basepay) * taxrate2;
//		printf("应缴纳税费%.2f\n", tax);
//		printf("请再次输入你的工资(q退出)：\n");
//	}
//	printf("\nDone!\n");
//	return 0;
//}

/*编程复习题7.12 11 P149*/
//#define artichoke 2.05   //洋蓟售价   美元/磅
//#define sugarbeet 1.15   //甜菜售价   美元/磅
//#define carrot 1.09      //胡萝卜售价 美元/磅
//#define discount 0.05    //折扣（满100美元的订单）
//#include <stdio.h>
//int main(void)
//{
//	float freight_package_charge = 0, vegetable_cost = 0, totalpay = 0;  //运费包装费、订购的蔬菜费用、订单总费用
//	char ch;    //选择菜单的字母
//	int a = 0, totalweight = 0, artichoke_weight = 0, sugarbeet_weight = 0, carrot_weight = 0;   //订购的重量（总磅数）、各蔬菜的磅数
//	printf("****************************\n");
//	printf("请选择你要订购的种类：\n");
//	printf("a)洋蓟     b)甜菜  \n");
//	printf("c)胡萝卜   q)退出订购 \n");
//	printf("****************************\n");
//	while ((ch = getchar()) != 'q')
//	{
//		switch (ch)
//		{
//		case 'a':printf("请输入你要订购的磅数（洋蓟）：\n");
//			scanf("%d", &a);
//			artichoke_weight = artichoke_weight + a;
//			break;
//		case 'b':printf("请输入你要订购的磅数（甜菜）：\n");
//			scanf("%d", &a);
//			sugarbeet_weight = sugarbeet_weight + a;
//			break;
//		case 'c':printf("请输入你要订购的磅数（胡萝卜）：\n");
//			scanf("%d", &a);
//			carrot_weight = carrot_weight + a;
//			break;
//		case 'q':
//			break;
//		default:printf("请输入正确的选项：\n");
//			break;                   
//		}
//		printf("请继续选择你要订购的种类（q退出）：\n");
//		getchar();
//		continue;
//	}
//	printf("物品售价：洋蓟2.05美元/磅，甜菜1.15美元/磅，胡萝卜1.09美元/磅\n");
//	totalweight = artichoke_weight + sugarbeet_weight + carrot_weight;
//	printf("你订购的重量为%d磅\n", totalweight);
//	vegetable_cost = artichoke * artichoke_weight + sugarbeet * sugarbeet_weight + carrot * carrot_weight;
//	printf("你订购的蔬菜费用为为%.2f美元\n", vegetable_cost);
//	if (vegetable_cost <= 5)
//	{
//		freight_package_charge = 6.5;
//		printf("订单的运费和包装费为：%.2f美元\n", freight_package_charge);
//		totalpay = vegetable_cost + freight_package_charge;
//		printf("订单的总费用为：%.2f美元\n", totalpay);
//	}
//	else if (vegetable_cost <= 20)
//	{
//		freight_package_charge = 14;
//		printf("订单的运费和包装费为：%.2f美元\n", freight_package_charge);
//		totalpay = vegetable_cost + freight_package_charge;
//		printf("订单的总费用为：%.2f美元\n", totalpay);
//	}
//	else
//	{
//		freight_package_charge = 14 + (totalweight - 20) * 0.5;
//		printf("订单的运费和包装费为：%.2f美元\n", freight_package_charge);
//		if (vegetable_cost >= 100)
//		{
//			totalpay = (vegetable_cost - vegetable_cost * discount) + freight_package_charge;
//			printf("你的订单的折扣为：%.2f美元\n", vegetable_cost * discount);
//		}
//		else
//		totalpay = vegetable_cost + freight_package_charge;
//		printf("你的订单的折扣为：0\n");
//		printf("订单的总费用为：%.2f美元\n", totalpay);
//	}
//	printf("Done!\n");
//	return 0;
//}

/*编程复习题8.11 1 P149*/
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int counter = 0;
//	while ((ch = getchar()) != EOF) 
//	{
//		counter++;
//	}
//	printf("该文件有%d个字符", counter);
//	return 0;
//}

/*编程复习题8.11 2 P149*/
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
//		}   //每10个打印一个换行符
//		if (ch >= '\040') {
//			printf(" \'%c\'--%3d ", ch, ch);
//		} //大于空格字符的可显示为字符的处理和判断
//		else if (ch == '\n') {
//			printf(" \\n--\\n\n ");
//			counter = 0;
//		} //换行符的处理
//		else if (ch == '\t') {
//			printf(" \\t--\\t ");
//		}//制表符的处理
//		else {
//			printf(" \'%c\'--^%c ", ch, (ch + 64));
//		}
//	}
//	return 0;
//}

/*编程复习题8.11 3 P149*/
//#include <stdio.h>
//#include <ctype.h>  //islower()和isupper()函数的头文件
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
//	printf("一共有%d个大写字母和%d个小写字母在这个文件！\n", uppercase, lowercase);
//	return 0;
//}

/*编程复习题8.11 4 P149*/
//#include <stdio.h>
//#include <ctype.h>  //islower()和isupper()函数的头文件
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
//		printf("一共有%d个单词%d个字母,%.2f C/W!\n", words, letter, 1.0 * letter / words);
//		return 0;
//}

/*编程复习题8.11 5 P149*/
//#include <stdio.h>
//int main(void)
//{
//	int head = 1;
//	int tail = 100;
//	int guess = (head + tail) / 2;        //中数
//	char ch;
//	printf("现在有一个整数范围1-100，我会试图猜出你心中所想的数\n");
//	printf("如果我猜对了请输入y，若猜错了请输入n。\n");
//	do {
//		printf("我猜...是%d吗？", guess);
//		if (getchar() == 'y')
//			break;
//		printf("好的，那么%d是大于还是小于你的数？(l or s)", guess);
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
//	printf("我猜到了!\n");
//	return 0;
//}

/*编程复习题8.11 6 P149*/
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

/*编程复习题8.11 7 P149*/
//#define taxrate1 0.15   //前300税率
//#define taxrate2 0.20   //续150税率
//#define taxrate3 0.25   //余下的税率
//#include <stdio.h>
//int main(void)
//{
//	float basepay = 0, hour = 0, tax = 0, totalpay = 0, realpay = 0;
//	char i;
//	printf("*********************************************\n");
//	printf("请选择你的工资等级：\n");
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
//	default:printf("请输入正确的选项：");     //bug:会弹出两次"请输入正确的选项："
//		break;                 
//	    }
//	} while (i != 'a'&& i != 'b' && i != 'c' && i != 'd' && i != 'A' && i != 'B' && i != 'C' && i != 'D' && i != 'q' && i != 'Q');
//	
//	printf("请输入一周工作的小时数：");
//	while (scanf("%f", &hour) == 1)       //判断是否为浮点数
//	{
//		if (hour <= 40)                   //工作小时数不超过40小时
//		{
//			totalpay = hour * basepay;
//			if (hour <= 30)               //前30小时
//				tax = totalpay * taxrate1;
//			else
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			realpay = totalpay - tax;
//		}
//		else {                            //工作小时数超过40小时
//			hour = hour + (hour - 40) * 1.5;
//			totalpay = hour * basepay;
//			tax = totalpay * taxrate1;
//			if (hour <= 45)               //前450（已知收入直接计算）
//				tax = basepay * 30 * taxrate1 + (hour - 30) * basepay * taxrate2;
//			else
//				tax = basepay * 30 * taxrate1 + basepay * 15 * taxrate2 + (hour - 45) * basepay * taxrate3;
//			realpay = totalpay - tax;
//		}
//		printf("工资总额为%.2f、税金为%.2f、净收入为%.2f\n", totalpay, tax, realpay);
//		printf("请输入一周工作的小时数(q退出)：");
//	}
//	loop:printf("\nDone!\n");
//	return 0;
//}

/*编程复习题8.11 8 P149*/
#include <stdio.h>
//float get_number(void)
//{
//	float f;
//	char c;
//	while (scanf("%g", &f) != 1) {
//		while ((c = getchar()) != '\n')
//			putchar(c);
//		printf(" 不是一个数字，请重新输入一个数字：\n");
//	}
//	return f;
//}
//
//int main(void)
//{
//	float first_number = 0, second_number = 0, result = 0;
//	char operate;          //保存用户输入的选项
//	printf("*********************************\n");
//	printf("请选择你的选项：\n");
//	printf("a)加    b)减   c)乘\n");
//	printf("d)除   q)quit\n");
//	printf("*********************************\n");
//	do {
//		operate = getchar();
//		while (getchar() != '\n')continue;
//		switch (operate)
//		{
//		case 'a':printf("请输入第一个数字：");
//			first_number = get_number();
//			printf("请输入第二个数字：");
//			second_number = get_number();
//			printf("%g+%g=%g\n", first_number, second_number, first_number + second_number);
//			break;
//		case 'b':printf("请输入第一个数字：");
//			first_number = get_number();
//			printf("请输入第二个数字：");
//			second_number = get_number();
//			printf("%g-%g=%g\n", first_number, second_number, first_number - second_number);
//			break;
//		case 'c':printf("请输入第一个数字：");
//			first_number = get_number();
//			printf("请输入第二个数字：");
//			second_number = get_number();
//			printf("%g*%g=%g\n", first_number, second_number, first_number * second_number);
//			break;
//		case 'd':printf("请输入第一个数字：");
//			first_number = get_number();
//			printf("请输入第二个数字：");
//			while ((second_number = get_number()) == 0) {
//				printf("被除数不能是0，请再输入其他数字：");
//			}
//			printf("%g/%g=%g\n", first_number, second_number, first_number / second_number);
//			break;
//		case 'q':break;
//		default:printf("请输入正确的选项：");
//			while (getchar() != '\n');
//			break;
//		}while (getchar() != '\n');
//	}	while (operate != 'q');
//     printf("\nDone!\n");
//	return 0;
//}


