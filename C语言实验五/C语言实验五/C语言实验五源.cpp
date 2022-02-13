//（1）以下程序以每行输出 4 个，输出 a 数组。（中等难度题）
//#include "stdio.h" 
//int main()
//{
//   int a[12], i;
//for (i = 0; i < 12; i++)
//scanf("%d",a[i]);
//for (i = 0; i < 12; i++)
//{
//if (i%4==0);
//printf("%6d", a[i]);
//}
//printf("\n");
//}

//2）若有三个字符串 s1、s2 和 s3，其中 s1 = "abcdef"， s2 = "123456"，要求用字符数组实现
//将 s1 的内容复制到 s3 中，交将 s2 的内容添加到 s3 的后面，最后输出 s3。
//#include "stdio.h" 
//int main()
//{
//	char s1 = "abcdef", s2 = "123456", s3[20] = "";
//	i = 0;
//	j = 0;
//	while (s1[i]!='\0')
//	{
//		s3[i] = s1[i]; i++;
//	}
//	i--;
//	while (s2[j] != '\0')
//	{s3[i]=s2[j]; j++;
//	}
//	for (j=i,i=0;i) 
//		printf("%c", s3[i]);
//}

//从键盘输入十个数对一个一维数组赋值，并将其中的奇数存放到另一个数组中后再输 
//出，并输出奇数的个数。
//#include<stdio.h>
//int main()
//{
//	int s1[15], s2[15], i, j;
//	for (i = 0, j = 0; i < 10; i++)
//	{
//		scanf("%d", &s1[i]);
//		if (s1[i] % 2 != 0) { s2[j] = s1[i]; j++; }
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", s2[i]);
//	}
//	printf("\n");
//}

//(2) 编程求一个 m* n 的二维数组中所有元素的最大值，元素可随机产生。
#include<stdio.h>
void main()
{
	int a[5][5], max, i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	max = a[0][0];
	for (i = 0; i < 5; i++)
	for (j = 0; j < 5; j++)
		if (a[i][j] > max)
		{
			max = a[i][j];
		}
	printf("最大数为：%d\n",max);
}
