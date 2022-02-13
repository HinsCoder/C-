//实验七
//1． 分析下列程序的运行结果，并上机验证。 
//#include<stdio.h>
//int main()
//{
//	int i, j, * pi, * pj;
//	pi = &i;
//	pj = &j;
//	i = 5;
//	j = 7;
//	printf("%d\t%d\t%d\t%d", i, j, pi, pj);
//	printf("\n%d\t%d\t%d\t%d\n", &i, *&i, &j, *&j);
//}

//(2)
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3 };
//	int* p, i;
//	p = a;
//	for (i = 0; i < 3; i++)
//		printf("%d %d %d %d\n", a[i], p[i], *(p + i), *(a + i));
//}

//(3)
//#include<stdio.h>
//int main()
//{
//	int a[] = { 2, 5, 3, 6, 8 };
//	int* p, i = 1, s = 0;
//	for (p = a; p < a + 5; p++)
//	{
//		i *= *p; s += *p;
//	}
//	printf("%d %d\n", i, s);
//}

/*（1）编写函数，求出小于或等于 m 的所有素数并放在数组 a 中，并把所有素数的个数作为 
函数值返回。函数原型如下：int fun(int *a,int m); */
//#include<stdio.h>
//#include<math.h>
//int fun(int* a, int m)
//{
//	int i, j, k;
//	int sum = 0;
//	for (i = 2; i <= m; i++)
//	{
//		k = (int)sqrt(i);
//		for (j = 2; j < k; j++)
//			if (i % j == 0)
//				break;
//		if (j > k)
//		{
//			*(a + sum) = i;
//			sum++;
//		}
//	}
//	return sum;
//}
//void main(void)
//{
//	int a[10], n, i;
//	printf("素数的个数为%d\n", n = fun(a, 10));
//	for (i = 0; i < n; i++)
//		printf("%d ", a[i]);
//}

/*（2）编写函数，分别求出数组 a 中所有奇数、偶数之和。形参 n 给出数组元素的个数，整 
型指针 odd 返回奇数之和，even 返回偶数之和。函数原型如下：int fun(int *a,int n,int *odd,int 
*even); */
#include<stdio.h>
void fun(int* a, int n, int* odd, int* even)
{
	int i;
	int tmp;
	*odd = *even = 0;
	for (i = 0; i < n; i++);
	{
		tmp = *(a + i);
		if (tmp % 2)
			*odd = *odd + tmp;
		else
			*even = *even + tmp;
	}
}
void main()
{
	int a[6] = { 3,6,7,2,5,8 }, i, n = 6, odd, even;
	printf("数据是：\n");
	for (i = 0; i < n; i++)
		printf("%5d", *(a + i));
	printf("\n\n");
	fun(a, n,& odd, &even);
	printf("奇数的和为：%d\n", odd);
	printf("偶数的和为：%d\n", even);
}

/*（3）编写函数，函数返回数组 a 中 n 个学生中低于平均分的人数，并将低于平均分的分数 
放在数组 b 中。函数原型如下：int fun(int *a,int n,int *b);*/
//#include<stdio.h>
//int fun(int* a, int n, int* b)
//{
//	int i, x, j = 0, sum = 0;
//	for (i = 0; i < n; i++)
//		sum = sum + a[i];
//	x = sum / n;
//	for(i=0;i<n;i++)
//		if (a[i] < x)
//		{
//			b[j] = a[i];
//			j++;
//		}
//	return j;
//}
//void main()
//{
//	int i, j;
//	int a[10];
//	int b[10];
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	printf("低于平均分的人数：%d\n", j = fun(a, 10, b));
//	for (i = 0; i < j; i++)
//		printf("%d ", b[i]);
//}
