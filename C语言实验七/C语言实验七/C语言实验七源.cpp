//ʵ����
//1�� �������г�������н�������ϻ���֤�� 
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

/*��1����д���������С�ڻ���� m �������������������� a �У��������������ĸ�����Ϊ 
����ֵ���ء�����ԭ�����£�int fun(int *a,int m); */
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
//	printf("�����ĸ���Ϊ%d\n", n = fun(a, 10));
//	for (i = 0; i < n; i++)
//		printf("%d ", a[i]);
//}

/*��2����д�������ֱ�������� a ������������ż��֮�͡��β� n ��������Ԫ�صĸ������� 
��ָ�� odd ��������֮�ͣ�even ����ż��֮�͡�����ԭ�����£�int fun(int *a,int n,int *odd,int 
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
	printf("�����ǣ�\n");
	for (i = 0; i < n; i++)
		printf("%5d", *(a + i));
	printf("\n\n");
	fun(a, n,& odd, &even);
	printf("�����ĺ�Ϊ��%d\n", odd);
	printf("ż���ĺ�Ϊ��%d\n", even);
}

/*��3����д������������������ a �� n ��ѧ���е���ƽ���ֵ���������������ƽ���ֵķ��� 
�������� b �С�����ԭ�����£�int fun(int *a,int n,int *b);*/
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
//	printf("����ƽ���ֵ�������%d\n", j = fun(a, 10, b));
//	for (i = 0; i < j; i++)
//		printf("%d ", b[i]);
//}
